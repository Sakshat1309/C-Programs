
#include <iostream>
using namespace std;
int fact(int n)
{
    int facto = 1;
    for (int i = 1; i <= n; i++)
    {
        facto *= i;
    }
    return facto;
}
void ncr(int n, int r)
{
    int ans, k, diff;
    diff = n - r;
    int x = fact(n);
    int y = fact(r);
    int z = fact(n - r);
    k = z * y;
    ans = x / k;

    cout << ans;
}
int main()
{
    int i, j, n,k;
    cout << "enter value of n" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {  
        for(k=0;k<n-i-1;k++){
            cout<<" ";
        }
        for (j = 0; j <= i; j++)
        {
            ncr(i, j);
        }
        
        cout << endl;
    }
}