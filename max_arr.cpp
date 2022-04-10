#include<iostream>
using namespace std;

int main(){
    int n,i,j,max=0;
    cout<<"enter the length of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    max=arr[0];
    for(i=0;i<n-1;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max<<endl;

}