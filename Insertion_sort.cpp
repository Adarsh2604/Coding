/*###################################*****(ADARSH)*****################################*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    // INSERTION SORT------->
    for (int i = 0; i < n; i++)
    {
        /* code */
        int current = a[i];
        while (a[i - 1] > current && i >= 0)
        {
            a[i] = a[i - 1];

            i--;
        }
        a[i] = current;
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << a[i] << " ";
    }

    return 0;
}