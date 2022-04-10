#include<iostream>
using namespace std;
int main(){
    int i,j,k=0,l,m,n,p,temp,r_st,r_en,c_st,c_en,q;
    
    cout<<"enter the value of rows"<<endl;
    cin>>m;
    cout<<"enter the value of coloumns"<<endl;
    cin>>n;
     int a[m][n];
     int b[m*n];
    cout<<"enter a 2D array"<<endl;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
            b[k]=a[i][j];
            k++;
        }
    }
    //sorting the 1d array
   for(int i=0;i<k;i++){
        for(j=0;j<k-1-i;j++){
            if(b[j]>b[j+1]){
                temp=b[j+1];
                b[j+1]=b[j];
                b[j]=temp;
            }
        }
    }
    //printing the sorted 1d array
    for(i=0;i<k;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    // entering as a spiral
    r_st=0;
    r_en=m-1;
    c_st=0;
    c_en=n-1;
    i=0;
   while(r_st<r_en && c_st<c_en){
       //left to right
       for(q=c_st;q<=c_en;q++){
           a[r_st][q]=b[i++];
       }
       r_st++;
       // top to bottom
       for(j=r_st;j<=r_en;j++){
           a[j][c_en]=b[i++];
       }
       c_en--;
        
        //bottom right to bottom left
        for(l=c_en;l>=c_st;l--){
           a[r_en][l]=b[i++];
       }
       r_en--;
         //bottom left to top left
        for(p=r_en;p>=r_st;p--){
           a[p][c_st]=b[i++];
       }
       c_st++;
   }
    
    cout<<"final matrix is "<<endl;
      for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

return 0;
}