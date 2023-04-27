#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int n;
	    cin>>n;
	    int price=(0.2*50)+(0.2*50)+(0.3*50);
	    int profit=50-price;
	    cout<<profit*n<<endl;
	}
	return 0;
}
