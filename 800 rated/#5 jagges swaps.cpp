//1896A
// array can never get sorted if first elecment is not 1
// if a[0] = 1, it can be sorted by given operation

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
        long long a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        if(a[0] == 1)
        {
            cout << "YES" << endl;
        }
        else{
            cout<< "NO" << endl;
        }
    }
    return 0;
}

// Time Complexity (TC): O(n) = O(10)
// Space Complexity (SC): O(n) = O(10)
