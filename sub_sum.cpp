#include<iostream>
using namespace std;

int main(){
    int n,i,j,sum=0;
    cout<<"enter the length of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    //finding sum of subarrays
    for(i=0;i<n;i++){
        sum =0;
        for(j=i;j<n;j++){
             sum+=arr[j];
        cout<<sum<<endl;
        }
    }
}