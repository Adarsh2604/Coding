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

      for (int i = 0; i < s.size(); i++)
      {
         if (s[i] == '(')
         {
            st.push('(');
         }
         else if (s[i] == ')' && st.size() != 0)
         {
            st.pop();
         }
         else
         
           { ok = true;
            break;
         }
      }
      if (ok == false && st.size() == 0)
         cout << "matching" << endl;
      else
         cout << "not matching" << endl;
   }
   return 0;
}