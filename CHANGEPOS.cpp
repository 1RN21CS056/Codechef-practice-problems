#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int s1, s2, e1, e2;
        cin >> s1 >> s2 >> e1 >> e2;
        if(s1 == e1 || s2 == e2)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
	return 0;
}
