/*###################################*****(ADARSH)*****################################*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
      int t;
      cin>>t;
      while(t--){
           string s;
           cin>>s;
           vector<int> v;
           for(int i=0;i<s.size();i++){
             if(s[i]=='('){
                v.push_back(1);
             }else if(s[i]==')') {
                v.push_back(-1);
             }
           }
           int sum=0;
           bool ok=true;
           for(int i=0;i<v.size();i++){
              sum+=v[i];
              if(sum<0){
                ok=false;
                break;
              }
           }
           if(ok==true && sum==0){
            cout<<"Matching"<<endl;
           }else{
            cout<<"Not_Matching"<<endl;
           }
    }
        return 0;
}
