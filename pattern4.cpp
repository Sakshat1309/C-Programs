#include<iostream>
using namespace std;
int main(){
        // right triangle 
        int i,j,k,x=0,l;

        for(i=4;i>=1;i--){
            for(k=1;k<=x;k++){
                cout<<" ";
            }
            x++;
            for(j=1;j<=i;j++){
                cout<<j;
            }
            cout<<endl;
        }
        return 0;
}