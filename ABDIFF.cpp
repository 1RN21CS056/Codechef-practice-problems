#include<bits/stdc++.h>
using namespace std;

void solve(){
  
   int a,b;
   cin>>a>>b;
   cout<<abs(a*b-(a+b))<<endl;
}

int main(){
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}