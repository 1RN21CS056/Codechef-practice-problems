#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t!=0)
	{
	    cin>>a>>b>>c;
	    if(a+b+c>=100)
	        {
	            if(a>=10 && b>=10 && c>=10)
	                cout<<"PASS"<<endl;
	            else 
	                cout<<"FAIL"<<endl;
	        }
	    else
	    cout<<"FAIL"<<endl;
	    t--;
	}
	
	return 0;
}