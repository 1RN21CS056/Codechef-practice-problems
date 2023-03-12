#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	        int x;
	        cin>>x;
	        if(x>= 4 && x<7)
	        {
	            cout<<"MEDIUM"<<endl;
	        }
	        else if(x>=7)
	        {
	            cout<<"HOT"<<endl;
	        }
	        else
	        {
	            cout<<"MILD"<<endl;
	        }
	        
	}
	return 0;
}
