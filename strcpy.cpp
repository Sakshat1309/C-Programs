#include <iostream>
using namespace std;
int main()
{
    int i, j;
    char s1[100], s2[100];

    cout << "enter a string" << endl;
    gets(s1);

    for (i = 0; s1[i] != '\0'; i++)
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    cout << "copied string is " << endl;
    puts(s2);

    return 0;
}
