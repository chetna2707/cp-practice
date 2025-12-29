// 1873C
// other method we can declare a score matrix 
// if a[i][j] == x, sum += score[i][j]

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char a[10][10];
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
                cin >> a[i][j];
        }
        
        int sum = 0;
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                if(a[i][j] == 'X')
                {
                    int pt = min({i,j,9-i,9-j});
                    sum += pt + 1;
                }
                
            }
        }
        cout << sum << endl;
    }
    return 0;
}

//tc = o[n^2]
// sc = o[n^2]
