#include <iostream>
using namespace std;
int main()
{
    int i, flag = 0, st = 0, en = 1, n, S, sum;
    cout << "enter the value of n" << endl;
    cin >> n;
    cout << "Enter the value of sum" << endl;
    int a[n];
    cin >> sum;
    cout << "Enter an array of n integers" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    S = a[st];
    while (st < n)
    {
        while (S < sum)
        {
            S = S + a[en];
            en++;
        }
        if (S == sum)
        {
            cout << st << " " << en-1 << endl;
            flag = 1;
            return 0;
        }

        while (S > sum)
        {
            S = S - a[st];
            st++;
        }
        
}
       if (flag == 0)
        {
            cout << "no subarray exists" << endl;
        }
    
}
