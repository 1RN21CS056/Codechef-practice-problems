#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int temp=0;
	    if(x>y)
	    {
	        cout<<(x-y)<<endl;
	    }
	    else if(x==y)
	    {
	        cout<<temp<<endl;
	    }
	    else if(x==temp)
	    {
	        cout<<x<<endl;
	    }
	    else
	    {
	        cout<<temp<<endl;
	    }
	}
	return 0;
}
