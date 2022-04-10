#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    string str = "4635120";
    if (next_permutation(str.begin(), str.end()))
        cout << " permutation is " << str;
    else
        cout << " permutation doesn't exist";
    return 0;
}