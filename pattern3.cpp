#include<iostream>
using namespace std;
int main(){
        // right triangle 
        int i,j,k,x=3,l;

        for(i=1;i<=4;i++){

            for(k=x;k>=1;k--){
                cout<<" ";
            }
            x--;
            for(j=1;j<=i;j++){
                cout<<j;
            }
            cout<<endl;
        }
        return 0;
}