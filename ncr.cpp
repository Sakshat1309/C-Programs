#include<iostream>
using namespace std;
 int fact(int n){
     int facto=1;
     for(int i=1;i<=n;i++){
       facto*=i;
     }
     return facto;
    
 }
 void ncr(int n, int r){
     int ans,k,diff;
     diff=n-r;
     int x=fact(n);
     int y=fact(r);
     int z = fact(n-r);
     k=z*y;
     ans=x/k;
     
     cout << " ans is " <<ans<<endl;
 }
 int main(){
     ncr(10,3);
     
 }