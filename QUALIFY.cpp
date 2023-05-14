#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int x,a,b;
	    cin>>x>>a>>b;
	    int marks=(1*a)+(2*b);
	    if(marks>=x)
	    {
	        cout<<"Qualify"<<endl;
	    }
	    else
	    {
	        cout<<"NotQualify"<<endl;
	    }
	}
	return 0;
}