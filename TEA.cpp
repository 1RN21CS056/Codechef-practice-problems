#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	for(int i=1;i<=T;i++){
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    if(X<=Y){
	        cout<<Z<<endl;
	    }else{
	        if(X%Y==0){
	            cout<<(X/Y)*Z<<endl;
	        }else{
	            int rupees=((X/Y)+1)*Z;
	            cout<<rupees<<endl;
	        }
	    }
	}
	return 0;
}