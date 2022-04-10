#include<iostream>
using namespace std;
#define n 100

class stack{
    int *arr;
    int top;
  
    public :
  stack(){
         arr = new int[n];
         top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"stack overflow"<<endl;
            return;
        }
        else{
           
            arr[++top]= x;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"khaali h"<<endl;
            return;
        }
        else{
            top--;
        }
    }
    bool isEmpty(){
      if(top==-1){
          return true;
      }
      else{
          return false;
      }

    }
    bool isFull(){
      if(top== n-1){
          return true;
      }
      else{
          return false;
      }

    }
    int Top(){
        return arr[top];
    }

};
void prefixeval(string &s){
    stack st;
    int op1,op2,i;
       for( i=0;s[i]!='\0';i++){
           if(s[i]>=48 && s[i]<=57){
              st.push(s[i]-48);
           }
           else{
                op1=st.Top();
                  st.pop();
                  op2=st.Top();
                  st.pop();
               switch(s[i])
               {
               case '+':
                  st.push(op1+op2);
                  break;
               case '-' :
                  st.push(op1-op2);
                  break;
               
               case '*' :
                  st.push(op1*op2);
                  break;
               
               case '/' :
                  st.push(op1/op2);
                  break;
               case '%' :
                  st.push(op1%op2);
                  break;
               
               }
           }
       }
       cout<<st.Top()<<endl;
}

int main(){
  string s;
  int num=0;
  cout<<"enter the prefix expression "<<endl;
  cin>>s;
  
  for(int i=0;s[i]!='\0';i++){
      num++;
  }
  for(int i=0;i<num/2;i++){
      swap(s[i],s[num-i-1]);
  }
  //if entered without reverse and values of op1 and op2 are interchanged code becomes postfix eval
    
    prefixeval(s);

}