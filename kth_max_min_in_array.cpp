/*###################################*****{ADARSH}*****################################*/
#include <bits/stdc++.h>
using namespace std;

// Kth smallest element in the array---------->

int kth_smallest(int n, int a[], int k)
{
    sort(a, a + n);
    // return a[k - 1];
    return a[k+1];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a[4] = {1, 5, 3, 7};
    int k = 2;
    cout << kth_smallest(4, a, 2);

    return 0;
}