#include<iostream>
typedef long long int lld;
#define mod 1000000007
using namespace std;
int v[106][106],vv[106][106],arr[500];

unordered_map<int,lld> m,d;
int calV(int r,int c)
{
    int S=-1;
    for(int i=r-1;i<=r+1;i++)
    for(int j=c-1;j<=c+1;j++)
     if(v[i][j]) S++;

     return S;
}
int main()
{
    int r,c,p,cnt=0;
    int M=INT_MIN;
    cin>>r>>c;
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
    {
        cin>>v[i][j];
    }

     for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
        if(i==1&&j==1) {}
        else
            if(v[i][j])
            {
                p=calV(i,j);
                m[p]++;
                vv[p][m[p]]=1000*i+j;
                M=max(M,p);
            }

    if(M<=0)
    {
        cout<<"No suitable girl found";return 0;
    }

    if(m[M]>1)
    {
        for(int i=1;i<=m[M];i++)
        {
            arr[i]=max(vv[M][i]/1000,vv[M][i]%1000);
            d[arr[i]]=vv[M][i];
        }
        sort(arr+1,arr+M);
        if(arr[1]==arr[2])
        {cout<<"Polygamy not allowed";return 0;}
        else
          {

           cout<<d[arr[1]]/1000<<":"<<d[arr[1]]%1000<<":"<<M;return 0;}

    }
    cout<<vv[M][m[M]]/1000<<":"<<vv[M][m[M]]%1000<<":"<<M;
}
