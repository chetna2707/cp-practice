//1877A
// total sum of goals should be 0
// to find missing number subtract sum of given array

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
        for(int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
        }
        
        int sum = 0;
        for(int i = 0; i < n - 1; i++)
        {
            sum += a[i];
        }
        cout << 0 - sum << endl;
    }
    return 0;
}

// tc = o[n]
// sc = o[n]
