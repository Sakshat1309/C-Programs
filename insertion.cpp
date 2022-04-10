#include<iostream>
using namespace std;
int main(){
    int pos=0,j,x,n;
    cin>>n;
    int a[n];
    cout<<"Enter an array of  integers"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=1;i<n;i++){
        int temp=a[i];
        j=i-1;
        while(a[j]>temp && j>=0){
            a[j+1]=a[j];
            j--;
        }
       a[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}