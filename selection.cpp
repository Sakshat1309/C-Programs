#include<iostream>
using namespace std;
int main(){
    int pos=0,i,j,a[10],temp;
    cout<<"Enter an array of 10 integers"<<endl;
    for(int x=0;x<10;x++){
        cin>>a[x];
    }
    for(i=0;i<10;i++){
        pos=i;
        for(j=i+1;j<10;j++){
            if(a[j]<a[pos]){
                pos=j;
            }
        }
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
    }
    for(int b=0;b<10;b++){
        cout<<a[b]<<"\t";
    }
    
}