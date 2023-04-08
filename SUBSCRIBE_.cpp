#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,x,n,a;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    a=n/6;
	    if(n>a*6) cout<<(a+1)*x<<endl;
	    else cout<<a*x<<endl;
	    
	}
	return 0;
}