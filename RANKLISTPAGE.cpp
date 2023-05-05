#include <iostream>
#include<cmath>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    double x;
	    cin>>x;
	    if(x<=25)
	    {
	        cout<<"1"<<endl;
	    }
	    else if(x>25)
	    {
	        cout<<ceil(x/25)<<endl;
	    }
	    
	}
	return 0;
}