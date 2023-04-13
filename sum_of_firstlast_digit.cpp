/*###################################*****(ADARSH)*****################################*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int num(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}                
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, first, last, digits;
        cin >> n;
        last = n % 10;
        // digits = log10(n);
        digits = num(n);
        first = n / pow(10, digits - 1);
        cout << first + last << endl;
    }
    return 0;
}