#include <iostream>
using namespace std;
int main()
{
    int i=0, j=0;
    char s1[100], s2[100],s3[200];

    cout << "enter a string" << endl;
    cin>>s1;
    cout <<"enter another string"<<endl;
    cin>>s2;
    while(s1[i]!='\0'){
        s3[j]=s1[i];
        j++;
        i++;
    }
    i=0;
    while(s2[i]!='\0'){
         s3[j]=s2[i];
        j++;
        i++;
    }
    s3[j]='\0';
    cout<<"concatenated string is "<<s3;
    return 0;
}
