#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // solution goes on....
        unordered_map<int, int> mp;
        // int fc = 0;
        for (auto x : arr)
        {
            if (x <= n)
            {
                for (int i = 0; i <= n; i += x)
                {
                    if (i != 0)
                    {
                        mp[i]++;
                    }
                }
            }
        }

        int maxi = INT_MIN;
        for (auto x : mp)
        {
            if (x.second > maxi)
            {
                maxi = x.second;
            }
        }
        if (maxi == INT_MIN)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << maxi << endl;
        }
    }
    return 0;
}