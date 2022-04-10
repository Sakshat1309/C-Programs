#include<iostream>
using namespace std;

 int calcvowel(char s[],int n){
    int count = 0;
    for(int i = 0;i<n;i++){
       if(s[i]=='a' || s[i]=='o' || s[i]=='i' || s[i]=='e' || s[i]=='u' ){
           count++;
       }
    }
    return count;
}
void maxVowel(string s[],int n){
    int a[n];
    for(int i = 0; i < n ; i++){
        char c[s[i].length()+1];
         strcpy(c,s[i].c_str());
       a[i]= calcvowel(c,s[i].length());

    }
    int maxt = a[0];
    for(int i = 0; i < n-1 ; i++){
        
       if(a[i+1]>maxt){
           maxt=a[i+1];
       }

    }
    int i;
    for(i=0;i<n;i++){
        if(maxt==a[i]){
            break;
        }
    }
    cout<<"String with maximum vowels is : "<<s[i]<<" -> "<<a[i]<<endl;
}
int main(){
    int n;
    cout<<"enter no of strings "<<endl;
    cin>>n;
   string s[n];
   
   for(int i=0;i<n;i++){
       cout<<"enter the string "<<endl;
   cin>>s[i];
   }
   maxVowel(s,n);

}