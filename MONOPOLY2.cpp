#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int x1,x2,x3,x4;
	    cin>>x1>>x2>>x3>>x4;
	    if(((x1+x2+x3)<x4)||((x2+x3+x4)<x1)||((x3+x4+x1)<x2)||((x4+x1+x2)<x3)){
	        cout<<"YES"<<endl;
	    }
	    else cout<<"NO"<<endl;
	}
	return 0;
}