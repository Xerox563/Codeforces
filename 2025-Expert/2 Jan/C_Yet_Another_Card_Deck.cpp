#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n), query(q);

    // Reading the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Reading the queries
    for (int i = 0; i < q; i++)
    {
        cin >> query[i];
    }

    // Solution
    unordered_map<int, int> mp;

    // Initialize the map with the last occurrence of each color
    for (int i = n - 1; i >= 0; i--)
    {
        mp[arr[i]] = i;
    }

    vector<int> ans(q);

    // Process each query
    for (int i = 0; i < q; i++)
    {
        int color = query[i];

        ans[i] = mp[color];

        for (auto &x : mp)
        {
            if (x.second < mp[color])
            {
                x.second++;
            }
        }

        mp[color] = 0;
    }

    // Output the result
    for (auto x : ans)
    {
        cout << x + 1 << " ";
    }

    return 0;
}
