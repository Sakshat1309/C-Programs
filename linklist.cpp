
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
       data = val;
       next = NULL;
    }
};
void insertAtHead(node* &head, int val){
  node* n = new node(val);
  n->next = head;
  head = n;
}
void insertAtTail(node* &head, int val){
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
bool searching(node* &head, int key){
       node* temp = head;
       while(temp!=NULL){

       if(temp->data == key){
           return true;
       }
       temp=temp->next;
       }
       return false;
}
void deleteNode(node* &head, int val){
    
    node* temp = head;
    if(searching(temp,val)==true)
    {
    while(temp->next->data!=val){
        temp=temp->next;
        
    }

    node* todelete = temp->next; // storing the node you want to delete cuz further it will be changed 
    temp->next=temp->next->next;
    
    delete todelete;
    }
    else{
        cout<<"element not found"<<endl;
    }
}

int main(){

    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtHead(head,5);
    display(head);
    insertAtHead(head,8);
    insertAtTail(head,6);
    insertAtTail(head,7);
    display(head);
    deleteNode(head,3);
    deleteNode(head,4);
    display(head);
    deleteNode(head,9);

}