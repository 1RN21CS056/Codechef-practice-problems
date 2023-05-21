#include <iostream>
using namespace std;

int main() {
int T;
float n,x;

cin>>T;
for(int i=0;i<T;i++){
    
    cin>>n>>x;
    if((n/2)<=x){
        cout<<"YES"<<endl;
    }

    else{
        
        cout<<"NO"<<endl;
    }
}
	return 0;
}