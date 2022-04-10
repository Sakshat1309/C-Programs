#include <iostream>
using namespace std;
int main()
{
  int i, j, temp, n;
  cout << "Enter the size of matrix" << endl;
  cin >> n;
  int a[n][n], b[n][n];
  cout << "enter a square matrix " << endl;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      cin >> a[i][j];
      b[i][j] = a[i][j];
    }
  }
  for (i = 0; i < n; i++)
  {

    b[i][i] = a[i][n - 1 - i];
    b[i][n - 1 - i] = a[i][i];
  }

  cout << "changed matrix is " << endl;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      cout << b[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}