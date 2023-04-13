/*###################################*****(ADARSH)*****################################*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        bool ok = false;
        //[9]
       // vector<int>v={2,3,4,5,6,5,6,90};
        //for(auto c: v)
        //cout << c << " ";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else if (s[i] == ')' && st.size() != 0 && st.top() == '(')
            {
                st.pop();
            }
            else if (s[i] == '}' && st.size() != 0 && st.top() == '{')
            {
                st.pop();
            }
            else if (s[i] == ']' && st.size() != 0 && st.top() == '[')
            {
                st.pop();
            }
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']')

            {
                ok = true;
                break;
            }
        }
        if (ok == false && st.size() == 0)
            cout << "Matching" << endl;
        else
            cout << "Not_Matching" << endl;
    }
    return 0;
}