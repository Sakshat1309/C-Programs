#include<iostream>
using namespace std;
int main()
{   int i,j,k,x=3,l;
    for(i=1;i<=4;i++){

        for(k=x;k>=1;k--){
        cout<<" ";
        }
        x--;
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(l=i-1;l>=1;l--){
            cout<<l;
        }
        cout<<endl;
    }
    
    return 0;
}