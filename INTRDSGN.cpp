#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int res=a+b;
	    int temp=c+d;
	    if(res>temp )
	    {
	        cout<<temp<<endl;
	    }
	    else
	    {
	        cout<<res<<endl;
	    }
	}
	return 0;
}
