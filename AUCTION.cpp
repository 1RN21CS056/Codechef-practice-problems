#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(c>a && c>b)
	    {
	        cout<<"CHARLIE"<<endl;
	    }
	    else if(b>a && b>c)
	    {
	        cout<<"BOB"<<endl;
	    }
	    else
	    {
	        cout<<"ALICE"<<endl;
	    }
	}
	return 0;
}
