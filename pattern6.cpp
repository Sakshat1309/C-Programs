#include<iostream>
using namespace std;
int main(){
        // full triangle 
        int i,j,k,x=0,l;

        for(i=1;i<=9;i++){
            for(k=1;k<=x;k++){
                cout<<" ";
            }
            x++;
            for(j=i;j<=9;j++){
                cout<<j;
            }
            cout<<endl;
        }
        return 0;
}