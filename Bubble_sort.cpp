/*###################################*****(ADARSH)*****################################*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //  BUBBLE SORT ---------->
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 1;
    while (count < n - 1)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (a[i] > a[i + 1])
            {
                //  int temp = a[i];
                //  a[i] = a[i + 1];
                //  a[i + 1] = temp;
                swap(a[i + 1], a[i]);
            }
        }
        count++;
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << a[i] << " ";
    }

    return 0;
}