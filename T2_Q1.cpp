#include<iostream>
using namespace std;

class Bank_Account{
       public:
      string name;
      long int AccNo;
      bool type;
      int bal;

      void deposit(){
          int n;
          cout<<"enter deposit amount"<<endl;
          cin>>n;
          bal=bal+n;
      }
      void withdraw(){
          int x;
          cout<<"Enter amount to be withdrawn"<<endl;
          cin>>x;
          if(x>bal){
              cout<<"insufficient balance"<<endl;
          }
          else{
              bal=bal-x;
          }
      }
      void display(){
       cout<<"Details of the account holder are :"<<endl<<endl;
          cout<<" NAME : "<<name<<endl;
          cout<<" Acc.No : "<<AccNo<<endl;
          cout<<" Acc type : "<<type<<endl;
          cout<<" BALANCE AMOUNT : "<<bal<<endl;
      }

};

int main(){
    int i,k;
    cout<<"Enter the number of users in the bank "<<endl;
    cin>>k;
    Bank_Account arr[k];
     for(i=0;i<k;i++){
         cout<<" Enter name of account holder "<<endl;
         cin>>arr[i].name;
          cout<<" Enter the account number "<<endl;
         cin>>arr[i].AccNo;
          cout<<" Enter Type of account -- '0' for saving and '1' for current "<<endl;
         cin>>arr[i].type;
          cout<<" Enter Balance "<<endl;
         cin>>arr[i].bal;
     }
     for(i=0;i<k;i++){
        arr[i].deposit();
        arr[i].withdraw();
        arr[i].display();
     }


    return 0;
}