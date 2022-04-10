#include <iostream>
using namespace std;
int main()
{
    int i=0,n,m,j=0;
    char s1[100], s2[100],s3[200];
    cout << "enter a string" << endl;
    cin>>s1;
    cout<<"enter position from where to where you want to delete"<<endl;
    cin>>n>>m;
    int k= strlen(s2)+n;
    for(i=0;i<n;i++){
        s3[j]=s1[i];
        j++;
    }
    for(i=m;s1[i]!='\0';i++){
        s3[j]=s1[i];
        j++;
    }
    s3[j]='\0';
    cout<<"final string is \n "<<s3;
    
}
