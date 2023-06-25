#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t;
	cin>>t;
	while(t--){
	    int x,n;
	    cin>>n>>x;
	   // if((n-x)>0 && ((x&&n)>0))cout<<"2"<<endl;
	   // else cout<<"0"<<endl;
	   int p= min(n,x);
	   int q= n-x;
	   cout<<min(p,q)<<endl;
	}
	return 0;
}