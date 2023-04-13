/*###################################*****{ADARSH}*****################################*/
#include <bits/stdc++.h>
using namespace std;
void countsort(int arr[], int n)
{   // finding the maximum element in the array---------->
    int k = arr[0];
    for (int i = 0; i < n; i++)
    {
        k = max(k, arr[i]);
    }
    // making a count array---------->
    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    // updating the count array by decreasing the elements by 1---------->
    for (int i = 1; i <= k; i++)
    {
        count[i] += count[i - 1];
    }
    // finally making an output array---------->

    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }                                                              // -------Time Complexity = max(Ai,n) : n is the size of array...
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}
int main()
{
    int arr[] = {1, 3, 4, 1, 4, 2, 4, 2};
    countsort(arr, 8);
    for (int i = 0; i < 8; i++)
    {
        
        cout << arr[i] << " ";
    }

    return 0;
}