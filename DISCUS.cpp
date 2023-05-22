#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	 cin>>t;
	 while(t--){
	     int a,b,c;
	     cin>>a>>b>>c;
	   //  if(a>b && a>c) cout<<a<<endl;
	   //  else if(b>a && b>c) cout<<b<<endl;
	   //  else if(c>a && c>b) cout<<c<<endl;
	   //  else cout<<a<<endl;
	   if(a<=b)a=b;
	   if(a<=c)a=c;
	     cout<<a<<endl;
	 }
	return 0;
}