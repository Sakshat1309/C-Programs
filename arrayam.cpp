#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i,j,key,pos=0,a[n];
    cout<<"Enter an array of n integers"<<endl;
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    
    for(i=0;i<n;i++){
        key=a[i];
        for(j=i+1;j<n;j++){
            if(a[j]==key){
                pos=1;
                break;
            }
            
        }
        if(pos==1){
                break;
            }
    }
    cout<<"output is \t"<<i+1<<endl;
     return 0;    
    
    
}