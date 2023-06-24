#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int z=a+b;
	    int count=0;
	    for(int i=2;i<z;i++){
	        if(z%i==0){
	            count++;
	        }
	    }
	    if(count>0){
	        cout<<"Bob"<<endl;
	    }
	    else{
	        cout<<"Alice"<<endl;
	    }
	}
	return 0;
}