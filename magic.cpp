#include <iostream>
using namespace std;
int main()
{
    int i, j, r_sum, n, c_sum, d_sum, sum = 0, r1 = 0, f = 0;
    cout << "Enter the size of matrix" << endl;
    cin >> n;
    int a[n][n];
    cout << "enter the square matrix " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
        sum += a[i][i];
    }


    for (i = 0; i < n; i++)
    {
        r_sum=0;
        c_sum=0;
        d_sum=0;

        for (j = 0; j < n; j++)
        {
            
             r_sum += a[i][j];
             c_sum += a[j][i];
             d_sum += a[j][n-j-1];

        }
        
        if (r_sum != sum || c_sum!= sum || d_sum!=sum)
        {
            cout << "Not a magic square" << endl;
            return 0;
        }
        else
            f = 1;
    }


    if (f == 1)
    {
        cout << " matrix is magic " << endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }

        return 0;
    }
}
