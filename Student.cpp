#include<iostream>
using namespace std;
class Student{
    public:
     int Rollno[50];
     string name[50];
     char grade[50];
     void read(){
         for(int i=0;i<4;i++){
            cout<<"enter name of the student"<<endl;
            cin>>name[i];
            cout<<"enter Roll no. of the student"<<endl;
            cin>>Rollno[i];
            cout<<"enter Grade of the student"<<endl;
            cin>>grade[i];
         }
     }
     void sort(){
              int temp;
              string temp1;
              char temp2;
             for(int i=0;i<=4;i++){
             for(int j=0;j<=3-i;j++){
            if(Rollno[j]>Rollno[j+1]){
                temp=Rollno[j+1];
                Rollno[j+1]=Rollno[j];
                Rollno[j]=temp;

                temp1=name[j+1];
                name[j+1]=name[j];
                name[j]=temp1;

                temp2=grade[j+1];
                grade[j+1]=grade[j];
                grade[j]=temp2;
            }
        }
           
         }
     }
     void display(){
         for(int i=1;i<=4;i++){
         cout<<"Roll no of student is \t"<<Rollno[i]<<endl;
         cout<<"Name of student is \t"<<name[i]<<endl;
         cout<<"Grade of student is \t"<<grade[i]<<endl;
     }

        }
};
int main(){
    Student info;
    info.read();
    info.sort();
    info.display();
    
    return 0;
}