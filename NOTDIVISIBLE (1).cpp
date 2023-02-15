#include <iostream>
using namespace std;

void solve()
{
        int m;
        cin >> m;
        for(int j=0; j<m; j++)
    {
            if(j%2==0)
        {  
            cout<<1<<" ";
        }
            else
        {    
            cout<<2<<" ";
        }    
     }        
        cout<<endl;
}

int main()
{
        int test_cases;
        cin>>test_cases;
        while(test_cases--)
        solve();
        return 0;
}