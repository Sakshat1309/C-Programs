#include <iostream>
using namespace std;
int main()
{
    int i=0, j=0,count=0;
    char s1[100], s2[100];

    cout << "enter a string" << endl;
    cin>>s1;
    cout <<"enter another string"<<endl;
    cin>>s2;
    
    for(i=0;s2[i]!='\0';i++){
        if(s1[i]!=s2[i]){
            cout<<"strings are not equal"<<endl;
            count=0;
             break;
        }
        else{
            count=1;
        }

    }
    if(count==1){
        cout<<"strings are equal"<<endl;
    }
    return 0;
}   
