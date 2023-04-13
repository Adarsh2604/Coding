/*###################################*****{ADARSH}*****################################*/
#include <bits/stdc++.h>
using namespace std;
void print(int ind, vector<int> &ds, int a[], int n)
{
    if (ind == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    // Not take
    print(ind + 1, ds, a, n);

    // Take
    ds.push_back(a[ind]);
    print(ind + 1, ds, a, n);

    ds.pop_back();
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    print(0, ds, a, n);
    return 0;
}