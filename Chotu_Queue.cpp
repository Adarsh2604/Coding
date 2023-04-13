/*###################################*****(ADARSH)*****################################*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        deque<int> d;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < 0)
            {
                d.push_front(v[i]);
            }
            else
            {
                d.push_back(v[i]);
            }
        }
        d.pop_front();
        d.pop_back();

        for (auto it : d)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}

// 9
// 1 5 -1 3 -3 6 -7 9 -4
//-4 -7 -3 -1 1 5  3 6 9