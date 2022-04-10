#include<iostream>
#include<stack>

using namespace std;

void pal(){
    int count=0;
    char s[100];
    char s1[100];
    stack<char> st;
    cout<<"enter a string"<<endl;
    cin.getline(s,100);
    for(int i=0;s[i]!='\0';i++){
        st.push(s[i]);

    }
    int i=0;
        cout<<"reverse word is : "<<endl;
    while(st.empty()!=true){
        s1[i]=st.top();
        cout<<st.top();
        i++;
        st.pop();
    }
    s1[i]='\0';
    for(i=0;s[i]!='\0';i++){
        if(s[i]!=s1[i]){
            cout<<"\n not a palindrome"<<endl;
            return;
        }
        else{
            count=1;
        }
    }
    if(count==1)
    {
        cout<<" \n it is a palindrome"<<endl;
    }
}

int main(){
    pal();
    return 0;
}