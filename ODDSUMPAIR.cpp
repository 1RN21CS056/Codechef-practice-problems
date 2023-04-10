#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t;
	cin>>t;
	while(t--){
	int x,y,z;
	cin>>x>>y>>z;
	 if((x+y)%2!=0 || (y+z)%2!=0 || (x+z)%2!=0 ){
	    
	     cout<<"YES"<<endl;
	 }
	 else
	     cout<<"NO"<<endl;
	 
	 
	}

	return 0;
}