#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        unordered_map<long long, long long> mp;

        // Solution.....
        string sol = "NO";
        long long evens = 0;
        long long odds = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                evens += arr[i];
            }
            else
            {
                odds += arr[i];
            }

            long long differencex = odds - evens;
            if (differencex == 0 || mp.find(differencex) != mp.end())
            {
                sol = "yEs";
                break;
            }
            else
            {
                mp[differencex] = i;
            }
        }
        cout << sol << endl;
    }
    return 0;
}