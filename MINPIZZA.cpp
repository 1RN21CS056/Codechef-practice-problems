#include <iostream>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--)
 {
     int n,x;
   cin>>n>>x;
   int s=n*x;
   int p=s/4;
   if(s%4>0)
       p=p+1;
   cout<<p<<endl;
 }
	return 0;
}