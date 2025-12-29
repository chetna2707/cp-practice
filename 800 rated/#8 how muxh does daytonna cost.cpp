// 1878A
// for k to be the most occuring element in the subsegment
// subsegment can be of any size
// in a subsegment of size 1 conatining k, k is most occuring
// so if k is present it return yes

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        long long a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        int flag = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == k)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        cout << "yes" <<endl;
        else
        cout << "no" <<endl;
    }
    return 0;
}

//tc: o[n]
// sc = o[n]
