/*###################################*****{ADARSH}*****################################*/
#include <bits/stdc++.h>
using namespace std;
void merge(int n, int m, int arr[], int brr[], vector<int> &res)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr[i] <= brr[j])
        {
            res.push_back(arr[i]);
            i++;
        }
        else
        {
            res.push_back(brr[j]);
            j++;
        }
    }
    while (i < n)
    {
        res.push_back(arr[i]);
        i++;
    }
    while (j < m)
    {
        res.push_back(brr[j]);
        j++;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int arr[n], brr[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> brr[j];
    }
    vector<int> res;
    merge(n, m, arr, brr, res);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}