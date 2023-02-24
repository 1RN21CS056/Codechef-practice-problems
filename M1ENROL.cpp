#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x, y;
	    cin>>x>>y;
	    int temp=0;
	    if(x==y || x>=y)
	    {
	        cout<<temp<<endl;
	    }
	    else
	    {
	        cout<<y-x<<endl;
	    }
	    
	}
	return 0;
}
