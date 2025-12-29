//1899A
// when n%3 is 1 or 2, vanya can just +1 or -1
// only when its multiple of 3 she would get struck and vova wins

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        long long n;
        cin >> n;
        
        if(n % 3 == 0)
        {
            cout << "Second" << endl;
        }
        else{
            cout << "First" << endl;
        }
    }
    return 0;
}

// TC: O[1]
// SC: O[1]  
