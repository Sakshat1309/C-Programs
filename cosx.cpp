#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i, j, fact, x;
    float val=0,sum=0;
    cout << "enter the value of angle in radians" << endl;
    cin >> x;

    for (i = 0; i <= 5; i++)
    {
        fact = 1;
        for (j = 1; j <= 2 * i; j++)
        {
            fact = fact * j;
        }
        val = (pow((-1), i) * pow(x, 2 * i)) / fact;
        sum = sum + val;
    }
    cout << "value of cosx is \t " << sum << endl;
    return 0;
}
