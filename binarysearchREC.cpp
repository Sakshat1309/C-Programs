#include<iostream>
using namespace std;

void Binsearch(int arr[],int key,int start,int end){

   int mid = (start+end)/2;

    if(start>end || end<start){
        cout<<"not found"<<endl;
        return;
    }
    if(key==arr[mid]){
        cout<<"found the element"<<endl;
        return;
    }
    if(key>arr[mid]){
        Binsearch(arr,key,mid+1,end);
    }
    else{
        Binsearch(arr,key,start,mid-1);
    }
    
}
int main(){
    int a[10] ={1,4,6,8,12,13,16,18,19,21};
    int key;
    cout<<"enter a key"<<endl;
    cin>>key;
    Binsearch(a,key,0,9);
}