#include <iostream>
using namespace std ;
#define n 100

class stack{
   char *arr;
   int top;
   public:

   stack(){
       arr = new char[n];
       top=-1;
   }
    void push(char x)
    {
        if (top == n - 1)
        {
            cout << "stack is full" << endl;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "cannot be popped" << endl;
        }
        else
        {
            top--;
        }
    }
    bool isFull()
    {
        return top == n - 1;
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }

    char Top()
    {
        return arr[top];
    }

};

void balparen(string &s){
       int i,flag=0;
       stack st;
       for(int i=0;s[i]!='\0';i++){
          if( s[i]=='(' || s[i]=='[' || s[i]=='{'){
              st.push(s[i]);
              flag=0;
          }
          else {
              switch(s[i]){
                  case ')':
                  if(st.Top()=='('){
                     st.pop();
                     flag=1;
                  }
                  else{
                      cout<<"unbalanced parenthesis"<<endl;
                      return;
                  }
                  break;
                  case ']':
                  if(st.Top()=='['){
                     st.pop();
                     flag=1;
                  }
                  else{
                      cout<<"unbalanced parenthesis"<<endl;
                      return;
                  }
                  break;
                  case '}':
                  if(st.Top()=='{'){
                     st.pop();
                     flag=1;
                  }
                  else{
                      cout<<"unbalanced parenthesis"<<endl;
                      return;
                  }
                  break;



              }
              
          }

       }
       if(flag==1){
                  cout<<"balanced parenthesis"<<endl;
              }
              else{
                  cout<<"unbalanced parenthesis"<<endl;
              }

}
int main(){
    string str;
    cout<<"enter balanced parenthesis string to check"<<endl;
    cin>>str;

    balparen(str);
}