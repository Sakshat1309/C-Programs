#include<iostream>
using namespace std;

class queueSLL{
    public:
    queueSLL * next;
    int data;
    int priority;
    
    queueSLL(int val,int prior){
        priority=prior;
        data=val;
        next=NULL;
    }
};
 void enqueue(queueSLL *&head,int val,int prior){
     queueSLL* node = new queueSLL(val,prior);
     queueSLL * temp = head;
     if(head==NULL){
     head = node;
     head->next=head;
     return;
     }
     while(temp->next!=head){
         temp=temp->next;
     }
     node->next=head;
     temp->next=node;
 }
 void dequeue(queueSLL*& head){
     if(head==NULL){
         cout<<"nothing to dequeue"<<endl;
         return;
     }
     queueSLL* temp = head;
      queueSLL* temp2 = head;
      while(temp2->next!=head){
      temp2=temp2->next;
      }
     head=head->next;
     temp2->next=head;
     temp->next=NULL;
     delete temp;
 }
 void display(queueSLL* head){
     queueSLL* temp = head;
     if(head==NULL){
         cout<<"queue is empty"<<endl;
     }
    while(temp->next!=head){
        cout<<temp->data<<"("<<temp->priority<<")"<<"--><--";
        temp=temp->next;
    } 
    cout<<temp->data<<"("<<temp->priority<<")"<<"--><--"<<endl;
    
 }
 queueSLL* swap(queueSLL* ptr1, queueSLL* ptr2)
{
    queueSLL* tmp = ptr2->next;
    ptr2->next = ptr1;
    ptr1->next = tmp;
    return ptr2;
}
void bubbleSort(queueSLL **head, int count)
{
    queueSLL** h;
    int i, j, swapped;
  
    for (i = 0; i <  count; i++)
    {
  
        h = head;
        swapped = 0;
  
        for (j = 0; j < count  - i -1; j++) 
        {
  
               queueSLL* p1 = *h;
                queueSLL*  p2 = p1->next;
  
            if (p1->priority > p2->priority)
            {
                *h = swap(p1, p2);
                swapped = 1;
            }
  
            h = &(*h)->next;
        }
        if (swapped == 0)
            break;
    }
}

int main(){
  queueSLL *head = NULL;
  enqueue(head,10,1);
  enqueue(head,20,1);
  enqueue(head,30,2);
  enqueue(head,40,2);
  display(head);
  enqueue(head,12,3);
  enqueue(head,24,1);
  enqueue(head,31,4);
  enqueue(head,47,2);
  dequeue(head);
  display(head);
 bubbleSort(&head,8);
  display(head);
}