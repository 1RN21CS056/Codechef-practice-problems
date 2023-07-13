#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(2*a+b > 2*c+d)
    cout<<"Messi\n";
    else if(2*a+b< 2*c+d)
    cout<<"Ronaldo\n";
    else 
    cout<<"Equal\n";
	return 0;
}