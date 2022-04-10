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
void insertAtHead(node *&head, int val){
    node *n = new node(val);


  if(head==NULL){
    n->next=n;
    head=n;
    return;
   }
    node *temp= head;

    while(temp->next!=head){
        temp=temp->next;
    }
   
    temp->next=n;
     n->next=head;
    head=n;



}

void insertAtTail(node *&head,int val){
    node *n = new node(val);

  if(head==NULL){
    insertAtHead(head,val);
    return;
   }
    node *temp= head;

    while(temp->next!=head){
        temp=temp->next;
    }
    // n->next = temp->next;
    temp->next = n;
    n->next=head;

}

void deleteAtTail(node *&head){
   

   node *temp = head;
   node *todelete;

   if(head->next==NULL){
       todelete = head;
       delete todelete;
       return;
   }
   if(head==NULL){
       cout<<"empty list"<<endl;
       return;
   }

   while(temp->next->next!=head){
        temp=temp->next;
    }
    todelete = temp->next;
    temp->next = head;

    delete todelete;
}
void deleteAtPos(node *&head,int pos){

 
 int count =1;

   node *temp = head;
   node *todelete;

   

   while(count!=pos-1 && temp->next!=head){
        temp=temp->next;
        count++;
    }
   if(pos==1){
       while(temp->next!=head){
           temp=temp->next;
       }
       temp->next = head->next;
       todelete = head;
       head = head->next;
       delete todelete;
       return;
   }
   
    todelete = temp->next;
    temp->next = temp->next->next;
    
    delete todelete;
}
void display(node *head){
    node *temp = head;
    while(temp->next!=head){
        cout<<temp->data<<"->";
        temp=temp->next;
    } 
    cout<<temp->data<<"->"<<head->data<<endl;
}

int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,4);
    insertAtTail(head,6);
    insertAtTail(head,8);
    deleteAtPos(head,3);
    deleteAtTail(head);
    deleteAtPos(head,1);
   display(head);
   
   
}
