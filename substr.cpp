#include <iostream>
using namespace std;
int main()
{
    int i=0,n,j=0;
    char s1[100], s2[100],s3[200];
    cout << "enter a string" << endl;
    cin>>s1;
    cout <<"enter another string to be inserted"<<endl;
    cin>>s2;
    cout<<"enter position of insertion"<<endl;
    cin>>n;
    int k= strlen(s2)+n;
    for(i=0;i<n;i++){
        s3[i]=s1[i];

    }
    for(i=n;i<strlen(s2)+n;i++){
        s3[i]=s2[j];
        j++;
    }
    j=n;
    for(i=k;i<strlen(s1)+k;i++){
        s3[i]=s1[j];
        j++;
    }
    
    cout<<"final string is \n "<<s3;
    
}
