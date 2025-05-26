#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tc;
    cin >> tc;

    while (tc--)
    {
        int n, queries;
        cin >> n >> queries;
        vector<int> stations(n);

        // Read the station numbers
        for (int i = 0; i < n; i++)
        {
            cin >> stations[i];
        }

        // Create a map to store the position of each station
        // unordered_map<int, int> mp;
        // for (int i = n - 1; i >= 0; i--)
        // {
        //     mp[stations[i]] = i;
        // }
        map<int, pair<int, int>> mp;
        for (int i = 0; i < n; i++)
        {
            if (!mp.count(stations[i]))
            {
                mp[stations[i]].first = i;
                mp[stations[i]].second = i;
            }
            else
            {
                mp[stations[i]].second = i;
            }
        }

        while (queries--)
        {
            int u, v;
            cin >> u >> v;

            // Check if both u and v exist in the map
            if (!mp.count(u) || !mp.count(v) || mp[u].first > mp[v].second)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }

    return 0;
}
