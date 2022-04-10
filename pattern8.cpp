#include <iostream>
using namespace std;
int main()
{
    int i, j, k, l, x = 9;
     for(i=5 ; i>=1; i--)
    {
         for(j=1 ; j<=i ; j++ )
        {
            cout<<+j;
        }
        for(k=x; k<=7; k++)
        {
            cout<<" ";
        }
        x-=2;
       
        for(l=i; l>=1 ; l--)
        {
            if(l!=5)
            cout<<+l;
        }
        cout<<endl;
    } 
    x=1;
    for(i=2 ; i<=5; i++)
    {
        
        for(j=1 ; j<=i ; j++ )
        {
            cout<<+j;
        }
        for(k=x; k<=5; k++)
        {
            cout<<" ";
        }
        x+=2;
        for(l=i; l>=1 ; l--)
        {
            if(l!=5)
            cout<<+l;
        }
        cout<<endl;
    }
    return 0;
}