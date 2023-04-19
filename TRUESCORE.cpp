#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int c,d;
	    cin>>c>>d;
	    if(c<a || d<b)
	    {
	        cout<<"IMPOSSIBLE"<<endl;
	    }
	    else if(c>=a || d>=b)
	    {
	        cout<<"POSSIBLE"<< endl;
	    }
	}
	return 0;
}