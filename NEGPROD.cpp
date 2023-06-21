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
        ll a,b,c;
        cin>>a>>b>>c;
        if(a*b<0||b*c<0||a*c<0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}