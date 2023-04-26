#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0)
	{
	    t--;
	    int c,a,b;
	    cin>>a>>b;
	    c=a+b;
	    if(c%2==0)
	    {
	        cout<<c/2<<"\n";
	    }
	    else
	    {
	        cout<<-1<<"\n";
	    }
	}
	return 0;
}
