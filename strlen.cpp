#include <iostream>
using namespace std;
int main()
{
    int i, count=0;
    char s1[100];

    cout << "enter a string" << endl;
    cin>>s1;

    for (i = 0; s1[i] != '\0'; i++)
    {
        count++;
    }
    cout << "length of the given string is " << count << endl;
    

    return 0;
}