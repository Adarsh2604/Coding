#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int binary(int a[], int n, int element)
{
    int low, mid, high;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == element)
        {
            return mid;
        }
        if (a[mid] < element)
        {

            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{   
    
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int element;
    cin >> element;
    int x = binary(a, n, element);
    cout << x;

    return 0;
}
