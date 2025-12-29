// 1901A
// going to x from 0, have fuel points at points_arr
// max unit distance == min fuel required


#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, x;
        cin >> n >> x;
 
        vector<long long> points_arr;
        points_arr.push_back(0);
 
        for(int i = 0; i < n; i++)
        {
            long long point;
            cin >> point;
            points_arr.push_back(point);
        }
 
        points_arr.push_back(x);
        n = points_arr.size();
 
        long long max_dist = 0;
 
        for(int i = 1; i < n; i++)
        {
            if(i == n - 1)
            {
                max_dist = max(max_dist, 2 * (points_arr[i] - points_arr[i - 1])); // 2 times cuz we have to come back to last fuel station from x
            }
            else
            {
                max_dist = max(max_dist, points_arr[i] - points_arr[i - 1]);
            }
        }
 
        cout << max_dist << endl;
    }
}
