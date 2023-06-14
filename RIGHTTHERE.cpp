#include <iostream>
using namespace std;

int main() {
int T;
int x,n;
cin>>T;
for(int i=0;i<T;i++){
    cin>>n>>x;
  if(n<=x){
      cout<<"YES"<<endl;
  }
    
    else{
        cout<<"NO"<<endl;
    }
}
	return 0;
}