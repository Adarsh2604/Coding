#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }
    int index;
    cin>>index;
    vector<int> v;
    for(int i=0; i<index-1; i++)
    {
        v.push_back(a[i]);

    }
    for(int i=index; i<n; i++)
    {
        v.push_back(a[i]);
    }
    for(int i=v.size(); i<n; i++)
    {
        cout<<v[i]<<" ";

    }


    return 0;

}
