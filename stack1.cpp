#include<iostream>
using namespace std;
#define n 100

class stack{
    int* arr;
    int top;

    public:
     stack(){
         arr = new int[n];
          top=-1;
     }
    void push(int x){
         
        if(top==n-1){
            cout<<"stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;

    }
    void pop(){
        if(top==-1){
            cout<<"no elemenet to pop"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
    void display(){
        if(top==-1)
        {
            cout<<"no elements in stack"<<endl;
        }
        else{
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<endl;
            }
        }
    }

};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.display();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();

}