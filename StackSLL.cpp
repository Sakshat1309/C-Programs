#include<iostream>
using namespace std;

class StackSLL{
    public:
    StackSLL * next;
    int data;
    
    StackSLL(int val){
        data=val;
        next=NULL;
    }
};
 void push(StackSLL *&head,int val){
     StackSLL* node = new StackSLL(val);
     StackSLL * temp = head;
     if(head==NULL){
     head = node;
     return;
     }
     while(temp->next!=NULL){
         temp=temp->next;
     }
     temp->next=node;
    
 }
 void pop(StackSLL*& head){
     if(head==NULL){
         cout<<"nothing to pop"<<endl;
         return;
     }
    StackSLL* temp = head;
    StackSLL* temp2 = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    StackSLL* toDelete = temp;

    while (temp2->next->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = NULL;

    delete toDelete;
 }
 void TOP(StackSLL* head){
     StackSLL* temp=head;
     while(temp->next!=NULL){
         temp=temp->next;
     }
     cout<<"TOP is : "<<temp->data<<endl;
 }
 void display(StackSLL* head){
     StackSLL* temp = head;
     if(head==NULL){
         cout<<"Stack is empty"<<endl;
     }
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    } 
    cout<<"NULL"<<endl;
 }

int main(){
  StackSLL *head = NULL;
  push(head,10);
  push(head,20);
  push(head,30);
  push(head,40);
  display(head);
  pop(head);
  pop(head);
  display(head);
  TOP(head);
}