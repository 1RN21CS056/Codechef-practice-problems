#include <iostream>
using namespace std;

int main() {
	// your code goes here
// 	 21 sum of 3 num
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    
    // int q= 21-(a+b);
    // if() cout<<q<<endl;
    // else cout<<"-1"<<endl;
    if((a+b)>10){
        cout<<(21-a-b)<<endl;
    }
    else {
        cout<<"-1"<<endl;
    }
}

	return 0;
}