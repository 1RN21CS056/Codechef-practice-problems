#include <iostream>
using namespace std;

int main() {
	// your code goes here]
	int t;
	cin>>t;
	while(t--){
	    long x,y;
	    cin>>x>>y;
	    long ans=0;
	    if(x*5<2*y+x)
	    ans=x*5;
	    else
	    ans=2*y+x;
	    cout<<ans<<endl;
	}
	return 0;
}