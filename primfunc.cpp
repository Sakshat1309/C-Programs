#include<iostream>
using namespace std;

void prim(int a){
    int c=0;
   for (int i=1;i<=a;i++){
       if(a%i==0){
       c++;
    }
   }
    if(c==2){
        cout<<a<<"\t";
    }


}

int main(){  
    int i,a,b;
    cout<<"enter limits"<<endl;
    cin>>a>>b;
    for(i=a;i<=b;i++){
        prim(i);
    }
    return 0;

}