#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t!=0)
	{
	    cin>>x>>y;
	    if(x==y && x!=0 && y!=0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    t--;
	}
	return 0;
}