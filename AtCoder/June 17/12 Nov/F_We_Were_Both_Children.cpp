#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long tc;
    cin >> tc;
    while (tc--)
    {
        long long n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> freq(n + 1, 0);
        // Solution goes Here
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int hop = arr[i];
            if (arr[i] > n)
                continue;
            for (int j = hop; j <= n; j += hop)
            {
                // mp[j]++;
                if (j <= n)
                    freq[j]++;
            }
        }
        // int maxFreq = 0;
        // for (auto &x : mp)
        // {
        //     maxFreq = max(maxFreq, x.second);
        // }
        int maxFreq = *max_element(freq.begin(), freq.end());
        cout << maxFreq << endl;
        // map<int, int> mp;
        // vector<int> v(n + 1, 0);
        // for (auto x : arr)
        // {
        //     mp[x]++;
        // }
        // for (auto &x : mp)
        // {
        //     for (int j = x.first; j <= n; j += x.first)
        //     {
        //         v[j] += x.second;
        //     }
        // }
        // int maxi = *max_element(v.begin(), v.end());
        // cout << maxi << endl;
    }
    return 0;
}