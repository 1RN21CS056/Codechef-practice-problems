#include <iostream>
using namespace std;
int t,n,x;
int main() {
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    if(n*x>=10000&&n*x<=99999) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}