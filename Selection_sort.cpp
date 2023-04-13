/*###################################*****(ADARSH)*****################################*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Selection sort--------->

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    // first loop is for first element
    // Second loop is for the next element

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++)
        {
            /* code */
            if (a[j] < a[i])
            {
                /* int temp = a[j];
                 a[j] = a[i];
                 a[i] = temp; */

                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << a[i] << " ";
    }

    return 0;
}