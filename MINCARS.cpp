#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int n;
	    cin>>n;
	    int cars=n/4;
	    if(n%4>0)
	    {
	        cars=cars+1;
	    }
	    cout<<cars<<endl;
	}
	return 0;
}