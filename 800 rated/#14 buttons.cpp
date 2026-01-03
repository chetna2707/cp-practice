// 1858A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;
        
        if(b > a)
        {
            cout << "Second" << endl;
        }
        else if( b = a && c % 2 == 0)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "First" << endl;
        }
        
        
    }
    return 0;
}

// tc = o[1]
// sc = o[1]
