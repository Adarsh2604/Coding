/*###################################*****(ADARSH)*****################################*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
// make  a function infixtopostfix and then we will call it
string infixtopostfix(string s)
{
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            res += c;
        else if (c == '(')
            st.push('(');
        else if (c == ')')
        {
            while (st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && prec(s[i]) <= prec(st.top()))
            {
                if (c == '^' && st.top() == '^')
                    break;
                else
                {
                    res += st.top();
                    st.pop();
                }
            }
            st.push(c);
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    cout << res << endl;
}

int main()
{
    cout << infixtopostfix("a+b*(c^d-e)^(f+g*h)-i");

    return 0;
}