#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// A  is complementary to T.
// T is complementary to A.
// C is complementary to G.
// G is complementary to C
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
for(int i=0;i<n;i++){
    if (s[i]=='A')
    s[i]='T';
    else if (s[i]=='T')
    s[i]='A';
    else if (s[i]=='C')
    s[i]='G';
    else if (s[i]=='G')
    s[i]='C';
    

}
cout<<s<<endl;
}
    return 0;

}
