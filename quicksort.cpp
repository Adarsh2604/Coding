/*###################################*****(ADARSH)*****################################*/
#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int l, int r)
{
    // pivoting the first left element------------->
    int pivot = arr[l];
    int i = l;
    int j = r;
    while (i <= j)
    {
        while (i <= j && arr[i] <= pivot)
            i++;
        while (i <= j && arr[j] > pivot)
            j--;
        if (i <= j)
            swap(arr[i], arr[j]);
    }
    swap(arr[j], arr[l]);
    return j;
}

void quickSort(int *arr, int l, int r)
{
    if (l >= r)
        return;

    // partitioning the array
    int p = partition(arr, l, r);

    // Sorting the left part
    quickSort(arr, l, p - 1);

    // Sorting the right part
    quickSort(arr, p + 1, r);
}
int main()
{
    int arr[] = {3400, 56, 12, 3, 475867, 98560, 7347, 0, 56, 900};
    quickSort(arr, 0, 9);
    for (int i = 0; i < 9; i++)
        cout << arr[i] << " ";
    return 0;
}
