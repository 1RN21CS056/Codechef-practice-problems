#include <iostream>
using namespace std;

int main() {
	int t;          // number of test cases
	cin >> t;
	
	while(t--)
	{
	    int x;      // body temperature of Chef
	    cin >> x;
	    if(x> 98)
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
