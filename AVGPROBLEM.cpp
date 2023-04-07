#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        float a,b,c;
        cin>>a>>b>>c;
        if ((a+b)/2>c)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
	// your code goes here
	return 0;
}