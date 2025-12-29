// 1900A
// if we have a sequence of 3 toh toh middle wala apne aap bhar jayegaa
// once middle one is filled it can transfer its water to other empty spaces jitni marji baar
// isliye when we detect a sequence of 3 we say answer is always 2
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
        string s;
        cin >> s;
        
        bool three = false;
        int count = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(i+2 < n && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') // check kiya i+2 < n taaki hum out of range na chale jaye
            {
                three = true;
                break;
            }
            
            if(s[i] == '.')
            {
                count++;
            }
        }
        if(three)
        {
            cout << 2 <<endl;
        }
        else
        {
           cout << count <<endl; 
        }
        
    }
    return 0;
}
