#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,y;
        cin>>n>>x>>y;
        if(y%x==0&&y/x<=n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}