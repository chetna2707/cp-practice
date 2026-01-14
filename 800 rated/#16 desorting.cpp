// 1853A 
// min differnce between to adjacent elements is used for calculating min no of operations

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; 
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        
        int op = INT_MAX;
        for(int i = 0; i < n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                op = 0; 
                break;
            }
            int diff= a[i+1] - a[i];
            int reqop= diff/2 + 1;
            op = min(op, reqop);
        }
        cout << op << endl;
        
    }
    return 0;
}
