#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i, j, x;
    double fact,val,sum=0,fin;
    cout << "enter the value of x " << endl;
    cin >> x;

    for (i = 0; i <=50; i++)
    {
         fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
       val=pow(x,i);
       fin=val/fact;

        sum = sum + fin;
        
    }
    cout << "value of e^x is \t " << sum << endl;
    cout<<val<<endl;
    return 0;
}
