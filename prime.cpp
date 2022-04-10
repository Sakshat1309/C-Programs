#include<iostream>
using namespace std;
int main(){
    int n,a=3,b;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(n%2==0 && n!=2){
        cout<<"NOT A PRIME NUMBER"<<endl;
    }
    else if(n==2){
        cout<<"It is prime"<<endl;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
             a=1;
            }
            else{
                a=2;
            }
        }
        if(a==2){
            cout<<"It is prime"<<endl;

        }
        else if(a==3){
            cout<< "neither prime nor composite"<<endl;
        }
        else{
            cout<<"It is not prime"<<endl;
        }
        
    }
    return 0;
}