#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, n, fact = 1;
    float sum = 0, val;
    cout << "Enter the value of angle in radians" << endl;
    cin >> x;
    for (n = 0; n <= 5; n++)
    {
       fact=1;
        for (int j = 1; j <= (2 * n + 1); j++)
        {
            fact = fact * j;
        }
            val = (pow(x, (2 * n + 1)) * pow((-1), n)) / fact;
            sum = sum + val;
            
    }

    cout << "value of sinx is: " << sum;
    return 0;
}