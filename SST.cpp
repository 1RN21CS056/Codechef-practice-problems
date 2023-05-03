#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test_cases;
	cin >> test_cases;
	for(int i=0; i<test_cases; i++){
	    int a, b;
	    cin >> a >> b;
	    if(a*.2>b*.1){
	        cout << "First" << endl;
	    }else if(a*.2<b*.1){
	        cout << "Second" << endl;
	    }else{
	        cout << "Any" << endl;
	    }
	}
	return 0;
}
