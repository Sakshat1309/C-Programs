#include<iostream>
using namespace std;
class node{
    public:
    char data;
    node* next;
    node(char val){
        data = val;
        next = NULL;
    }
};
void insert(node* &head,char val){
    node* n = new node(val);
    node* temp = head;


   if(head == NULL) 
    {
        head = n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n; 
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        
    } 
    cout<<"NULL"<<endl;
}
void checkPAl(node* head,int length){
    int flag=0;
    node* temp=head;
    node* temp1 = head;
    for(int i=0;i<length/2;i++){
        if(i>0)
       temp=temp->next;
       temp1=head;
         for(int j=0;j<length-i-1;j++){
             temp1=temp1->next;
         }
         if(temp->data != temp1->data){
            flag=1;
             break;
         }
         
    }
    if(flag==0){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
}
node* reverse(node* head){
    node* prev=NULL;
    node* nextptr=NULL;
    node* curr= head;
    while(curr!=NULL){
       nextptr=curr->next;
       curr->next=prev;
        prev=curr;
       curr=nextptr;
    }
    return prev;
}
void compare(node* head1,node* head2){
    int flag=0;
    while(head1!=NULL && head2!=NULL){
        if(head1->data!=head2->data){
            flag=1;
            cout<<"not a palindrome"<<endl;
            return;
        }
        head1=head1->next;
        head2=head2->next;
    }
    cout<<"PALINDROME"<<endl;
}

int main(){
    char s[20];int count =0;
    node* head = NULL;
    cout<<"enter a string"<<endl;
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
        count++;
       insert(head,s[i]);
    }
    display(head);
    checkPAl(head,count);
    node* head2=reverse(head);
    compare(head,head2);
}