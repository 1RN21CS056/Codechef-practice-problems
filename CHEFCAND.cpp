#include <iostream>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    int n,x;
    while(t--)
    {
        cin>>n>>x;
        int packets, packets_req;
        int candies_req = n-x;
        packets = candies_req/4;
        
        if(packets*4<candies_req)
        {
            packets_req =packets+1;
        }
        else
        {
            packets_req = packets; 
        }
        
        if(n<=x)
        std::cout << 0 << std::endl;
        else if(n>x)
        cout<<packets_req<<"\n";
        
    }

	return 0;
}