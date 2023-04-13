#include<bits/stdc++.h>
#include<iostream>
using namespace std;



int main()
{
int t;
cin>>t;
while(t--){
    int p;
    cin>>p;
    
int x=p/100;
int y=p%100;
if((x+y)<=10)
cout<<x+y<<endl;
else
cout<<-1<<endl;



}
    return 0;


}
