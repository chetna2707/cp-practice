// 1890A
// yes if all elements at even pos are equal nd odd positions are equal
// as we can reorder, we check no of elements

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
        for(int i = 0; i < n; i++) // n
        {
            cin >> a[i];
        }
        
        map<long long, long long> frequency;
        for(int i = 0; i < n; i++) // n
        {
            frequency[a[i]]++; // logn
        }
        // nlogn
        
        if(frequency.size() > 2)
        {
            cout << "NO" << endl;
        }
        else if(frequency.size() == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            long long freq1 = frequency.begin()->second;
            long long freq2 = frequency.rbegin()->second;
            
            if(freq1 == freq2)
            {
                cout << "YES" << endl;
            }
            else if(abs(freq1 - freq2) == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
    }
    return 0;
}

tc - o[nlogn]
sc - o[2n]
