#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int res =(2*x);
	    int temp=(5*y);
	    if(res>temp)
	    cout<<"Chocolate"<<endl;
	    else if(res<temp)
	    cout<<"Candy"<<endl;
	    else
	    {
	        cout<<"Either"<<endl;
	    }
	    
	}
	return 0;
}
