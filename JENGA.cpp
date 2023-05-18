#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int t;
	 cin>>t;
	for(int i=0; i<t; i++){
	     int n,x;
	     cin>>n>>x;
	     if(x%n==0)cout<<"yes"<<endl;
	     else cout<<"no"<<endl;
	 }
	return 0;
}