#include <iostream> 
#include <vector>
using namespace std;

int containerloading(int n,int capacity,vector<int> c){
sort(c.begin(),c.end());
int x=0;



for(int i=0;i<n && capacity>=0;i++){
capacity-=c[i];
if(capacity<0){
capacity+=c[i];
break;
}
x++;
}
return x;



}
int main(){
int n,capacity,boxes;
cout<<"enter the number of containers"<<endl;
cin>>n;
vector<int> c;
cout<<"enter container's capacity "<<endl;
for(int i=0;i<n;i++){
int k;
cin>>k;
c.push_back(k);
}
cout<<"Enter total capacity"<<endl;
cin>>capacity;
boxes = containerloading(n,capacity,c);
cout<<"no. of boxes are::"<<boxes<<endl;
return 0;
}