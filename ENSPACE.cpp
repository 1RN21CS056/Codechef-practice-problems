#include <iostream>
using namespace std;

int main() {
	// your code goes here'
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,y;
	    cin>>n>>x>>y;
	    int res=(x+y*2);
	    if (res<=n)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
