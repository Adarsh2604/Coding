/*###################################*****{ADARSH}*****################################*/
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s, int i, int j, int sz)
{
    if (i >= sz)
        return false;
    string P = s;
    reverse(P.begin() + i, P.begin() + j);
    return s == P;
}

string printPal(string &st, int i, int j)
{
    return st.substr(i, j - i + 1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s = "nayannamantenet";
    int sz = s.size();
    for (int i = 0; i < sz; i++)
    {
        for (int j = i; j < sz; j++)
        {
            if (isPalindrome(s, i, j, sz))
            {
                for (int k = j + 1; k < sz; k++)
                {
                    if (isPalindrome(s, j + 1, k, sz) && isPalindrome(s, k + 1, sz, sz))
                    {
                        cout << printPal(s, i, j) << endl
                             << printPal(s, j+1 , k) << endl
                             << printPal(s, k + 1, sz);
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}