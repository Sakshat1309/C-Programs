#include<iostream>
#include<stack>
using namespace std;

int main(){
   int ele;
   stack <int> st;
   stack <int> a;

  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);
  
  cout<<"original stack is"<<endl;
  while(st.empty()!=true){
      cout<<st.top()<<"\t";
      st.pop();
  }
  cout<<endl;

  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);
  
  //revresing the stack 

  while(st.empty()!=true){
       ele =0;
       ele=st.top();
       st.pop();
       a.push(ele);
  }
  cout<<"reversed stack is "<<endl;
  while(a.empty()!=true){
      cout<<a.top()<<"\t";
      a.pop();
  }
}