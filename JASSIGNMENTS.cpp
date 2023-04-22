#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int x;
	    cin>>x;
	    if(x+3<=10)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}