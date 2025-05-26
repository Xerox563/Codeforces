#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        unordered_map<int, pair<int, int>> mp; // {ele,{freq,ind}}
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]].first++;        // freq
            mp[arr[i]].second = i + 1; // ind
        }

        int f = INT_MAX; // min-freq
        int ans = -1;
        for (auto x : mp)
        {
            int ele = x.first;
            if (x.second.first == 1)
            {
                if (ele < f)
                {
                    ans = x.second.second;
                    f = ele;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

// By Xerox