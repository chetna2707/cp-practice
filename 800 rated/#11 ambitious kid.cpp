// 1866A
// min number of op needed to make prod = 0

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int num = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        num = min(num, abs(a[i]));
    }
    cout << abs(num);
    return 0;
}

//tc = o(n)
//sc = o(n)  
