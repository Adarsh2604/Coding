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
        long long int n;
        cin >> n;
        // c1+2c2=n
        // |c1-c2|=1 ,0
        // c1+2(c1-1) =n
        int a, b;

        if (n % 3 == 1)
        {
            a = n / 3;
            a++;
            b = n / 3;
        }
        else if (n % 3 == 2)
        {
            a = n / 3;
            b = n / 3;
            b++;
        }
        else
        {
            a = n / 3;
            b = n / 3;
        }
        cout << a << " " << b << endl;
    }
    return 0;
}