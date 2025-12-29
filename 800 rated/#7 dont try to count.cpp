// 1881A
// max 5 string addition can be performed 
// m x n <= 25, min length of x, n = 1, m = 25
// after 1 op n = 2, 2op n = 4, 3op n = 8, 4 op n = 16, 5op n = 32
// n = 32 is long enough for s(m = 25) to be a subtring of

#include <bits/stdc++.h>
using namespace std;
 
bool check(string x, string s)
{
    if(x.size() < s.size())
    {
        return false;
    }
    
    //say x = 12345678 and s = 345
    for(int i = 0; i < (x.size() - s.size() + 1); i++) //loop runs 8-3+1 = 6 times
    {
        // it will check for all possible substrings of size s
        // 123
        // 234
        // 345
        // 456
        // 567
        // 678
        if(x.substr(i,s.size()) == s)
        {
            return true;
        }
    }
    return false;
}
 
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;
        
        string x0 = x;
        string x1 = x0 + x0;
        string x2 = x1 + x1;
        string x3 = x2 + x2;
        string x4 = x3 + x3;
        string x5 = x4 + x4;
        
        long long ans = -1;
        if(check(x0,s))
        {
            ans = 0;
        }
        else if(check(x1,s))
        {
            ans = 1;
        }
         else if(check(x2,s))
        {
            ans = 2;
        }
         else if(check(x3,s))
        {
            ans = 3;
        }
         else if(check(x4,s))
        {
            ans = 4;
        }
         else if(check(x5,s))
        {
            ans = 5;
        }
        cout << ans << endl;
    }
    return 0;
}

//tc : o[2^5 * m * n] = o[m*n]
//sc : o[2^5 * n] = o[n] 
