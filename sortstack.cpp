
// int main(){
//     stack<int> st;
//     st.push(3);
//     st.push(1);
//     st.push(21);
//     st.push(11);
//     st.push(32);
//     st.push(13);

//     stack<int> st2;

//     while(st.empty()!=true){
//         if
//     }

// }
#include<iostream>
using namespace std;
#define n 100

class stack{
    int* arr;
    

    public:
    int top;
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
    int max =0;
    stack st;
    st.push(3);
    st.push(1);
    st.push(21);
    st.push(11);
    st.push(32);
    st.push(13);
}