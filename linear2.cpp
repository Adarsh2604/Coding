#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int linear(int a[],int n,int l){
  for(int i=0;i<n;i++){
    if(a[i]==l){
    return i;
  }
  }
  return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int element;
    cin>>element;
    int x=linear(a,n,element);
    cout<<x<<endl;

    return 0;


}
