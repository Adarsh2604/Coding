#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string p;
    for(int i=0;i<n-1;i++){
        if(s[i]=='0' && s[i+1]=='0'){
            p.push_back('A');
            i+=1;
        }else if(s[i]=='0' && s[i+1]=='1'){
            p.push_back('T');
            i+=1;
        }else if(s[i]=='1' && s[i+1]=='0'){
            p.push_back('C');
            i+=1;
        }else if(s[i]=='1' && s[i+1]=='1'){
            p.push_back('G');
            i+=1;
        }
    }
    cout<<p<<endl;
}
return 0;
}
