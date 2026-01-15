//1845A
// we can obtaiin any integer n by adding 1 n times
// if 1 is not available to us then we will think of other ways
// obtaining sum through 2 or 3
// if only 2 is available then we cant obtain any odd number

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        
        if(x != 1)
        {
            cout << "YES" << endl;
            cout << n << endl;
            for(int i = 0; i  < n; i++)
            {
                cout << 1 <<" ";
            }
            cout << endl;
        }
        else
        {
            if(k==1 || (k == 2 && n%2 == 1))
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                if(n%2 == 0)
                {
                    cout << n/2 << endl;
                    for(int i = 0; i  < n/2; i++)
                    {
                        cout << 2 <<" ";
                    }
                    cout << endl;
                }
                else
                {
                    cout << (n-3)/2 + 1 << endl;
                    for(int i = 0; i  < (n-3)/2; i++)
                    {
                        cout << 2 <<" ";
                    }
                    cout << 3 << " ";
                    cout << endl;
                    
                }
            }
        }
        
    }
}
