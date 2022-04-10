#include<iostream>
using namespace std;
int main(){
    int m,n,a;
    cout<<"enter m"<<endl;
    cin>>m;
    cout<<"enter n"<<endl;
    cin>>n;
    for(int i=m+1;i<n;i++){
        if(i%2==1){
            cout<<i<<"\t";
        }
    
    }
    
    return 0;
}