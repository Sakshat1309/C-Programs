#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    string str = "cdab";
    if (prev_permutation(str.begin(), str.end()))
        cout << " permutation is " << str;
    else
        cout << " permutation doesn't exist";
    return 0;
}