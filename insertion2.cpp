#include<iostream>
using namespace std;
int main(){
    int pos=0,i,j,a[10],temp,x;
    cout<<"Enter an array of 10 integers"<<endl;
    for(x=0;x<10;x++){
        cin>>a[x];
    }

    for(i=1;i<10;i++){
        temp=a[i];
        j=i-1;
        while(a[j]>temp && j>=0){
            a[j+1]=a[j];
            if(j!=0)
            j--;
        }
       a[j]=temp;

    }
    for(int b=0;b<10;b++){
        cout<<a[b]<<"\t";
    }
    return 0;
}