#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a;
	    cin>>a;
	    if(a%2==0 && a%7==0)
	    cout<<"Alice"<<endl;
	    else if(a%2==1 && a%9==0)
	    cout<<"Bob"<<endl;
	    else
	    cout<<"Charlie"<<endl;
	}
	return 0;
}