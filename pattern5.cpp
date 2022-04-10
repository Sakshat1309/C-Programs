#include<iostream>
using namespace std;
int main(){
        // right triangle 
        int i,j,k,x=3,l;

        for(i=4;i>=1;i--){
            for(k=1;k<=x;k++){
                cout<<" ";
            }
            x--;
            for(j=i;j<=4;j++){
                cout<<j;
            }
            cout<<endl;
        }
        return 0;
}