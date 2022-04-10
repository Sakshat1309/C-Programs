#include<iostream>
using namespace std;
int main(){
    int sum=0,n=1;
    cout<<"enter numbers till -1 is encountered"<<endl;
    while(n!=-1){
        cin>>n;
        if(n!=-1)
        sum=sum+n;
    }
    cout<<"sum is \t"<<sum<<endl;
    return 0;
}