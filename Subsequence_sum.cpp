/*###################################*****{ADARSH}*****################################*/
#include <bits/stdc++.h>
using namespace std;
void prints(int ind, vector<int> &ds, int s, int sum, int a[], int n)
{
    if (ind == n)
    {
        if (s == sum)
        {
            for (auto it : ds)
                cout << it << " ";
                cout << endl;
        }
        return;
    }
        ds.push_back(a[ind]);
        s += a[ind];
        prints(ind + 1, ds, s, sum, a, n);

        s -= a[ind];
        ds.pop_back();
        prints(ind + 1, ds, s, sum, a, n);
    
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a[] = {1, 2, 4, 5, 6, 7};
    int n = 6;
    int sum = 10;
    vector<int> ds;
    prints(0, ds, 0, sum, a, n);
    return 0;
}