// 1859A
// we need that b[i] % c[i] != 0
// so if all elements in c will ne greater than b, no element in b will be divisible by c

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
        vector<int> a(n);
        for(int i = 0; i< n; i++)
        {
            cin >> a[i];
        }
        
        int mx = *max_element(a.begin(), a.end());
        vector<int> b , c;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == mx)
            {
                c.push_back(a[i]);
            }
            else
            {
                b.push_back(a[i]);
            }
        }
        if(b.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << b.size() << " " << c.size() << endl;
            for(auto it: b)
            {
                cout << it << " ";
            }
            cout << endl;
            for(auto it: c)
            {
                cout << it << " ";
            }cout << endl;
        }
    }
    return 0;

  // tc = o[n]
  //sc o[n]
}
