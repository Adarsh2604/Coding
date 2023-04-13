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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            st.push(a[i]);
        }
        st.pop();
        while (st.size() > 0)
        {
            int x = st.top();
            cout << x << " ";
            st.pop();
        }
        cout<<endl;
        
        cout << st.size() << endl;
    }
    return 0;
}