#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x, y, z;
	    cin >> x >> y >> z;
	    if(x> y && x>z){
	        cout<< "SETTER" << endl;
	    }
	    else if(y > x && y>z){
	        cout<< "TESTER" << endl;
	    }
	    else{
	        cout<< "EDITORIALIST" << endl;
	    }
	}
	return 0;
}