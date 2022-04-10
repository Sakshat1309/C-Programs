
#include <iostream>
using namespace std;
#define n 100
class stack
{
    char *arr;
    int top;

public:
    stack()
    {
        arr = new char[n];
        top = -1;
    }
    void push(char x)
    {
        if (top == n - 1)
        {
            cout << "stack is full" << endl;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "cannot be popped" << endl;
        }
        else
        {
            top--;
        }
    }
    bool isFull()
    {
        return top == n - 1;
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }

    char Top()
    {
        return arr[top];
    }
};

int precedence(char a)
{
    if (a == '%')
        return 3;
    else if (a == '*' || a == '/')
        return 2;
    else if (a == '-' || a == '+')
        return 1;
    else
        return -1;
}

void inftopost(string &s)
{
    string s1;
    int num, i;
    stack st;
    for (i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            s1 += s[i]; //add in the string
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (st.isEmpty() != true && st.Top() != '(')
            {
                s1 += st.Top();
                st.pop();
            }

            if (st.isEmpty() != true)
            {
                st.pop();
            }
        }
        else
        {
            while ((st.isEmpty() != true) && (precedence(st.Top())) >= precedence(s[i]))
            {
                s1 += st.Top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while (st.isEmpty() != true)
    {
        s1 += st.Top();
        st.pop();
    }

    s1 += '\0';

    cout << "postfix expression is" << endl;
    cout << s1 << endl;
}

int main()
{
    string s;
    int num;
    cout << "enter infix expression" << endl;
    cin >> s;

    inftopost(s);
}
