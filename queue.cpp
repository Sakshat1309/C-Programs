#include <iostream>
using namespace std;
#define n 100

class queue{
    public:
    int *arr;
    int front,rear;
    queue(){
        arr = new int[n];
        front=-1;
        rear=-1;
    }
    
   void push(int val){
       if(rear==-1){
           front++;
       }
       if(rear==n-1){
           cout<<"not enogh space to push"<<endl;
           return;
       }
    rear++;
    arr[rear]=val;
  }
  void pop(){
      if(front==-1 || front==rear){
          cout<<"queue is empty"<<endl;
          return;
      }
      front++;
  }
  void display(){
      if(front==rear){
          cout<<" queue is empty "<<endl;
          return;
      }
      for(int i=front;i<=rear;i++){
          cout<<arr[i]<<" ";
      }
      cout<<endl;
  }
};

int main(){
    queue q ;
    q.push(10);
     q.push(20);
      q.push(30);
       q.push(40);
       q.display();
       q.pop();
       q.pop();
       q.display();
}