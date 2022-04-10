#include<iostream>
using namespace std;

void fib()
{   int t1,t2,n,s=0;
   cout<<"Enter the limit of fib series"<<endl;
   cin>>n;
    t1=0;
    t2=1;
    cout<<t1<<"\t"<<t2<<"\t";
    while(s<n){
    
   s=t1+t2;
    t1=t2;
    t2=s;
    if(s<n){
     cout<<s<<"\t";
    }
    
    }



}
int main(){
    fib();
}