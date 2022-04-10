#include<iostream>
using namespace std;
int main(){
    int a1,fact,n;
    cout<<"enter the 10 numbers"<<endl;
    
    for(int i=1;i<=10;i++){
       fact = 1;
       cin>>n;
       for(int j=1;j<=n;j++){
          fact=fact*j ;
       }
       cout<<"foctorial of "<< n<< "is \n"<< fact<<endl;

    }

    return 0;
}
