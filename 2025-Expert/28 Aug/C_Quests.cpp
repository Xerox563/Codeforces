#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a1(n);
        vector<int> b1(n);
        for (int i = 0; i < n; i++)
            cin >> a1[i];

        for (int i = 0; i < n; i++)
            cin >> b1[i];
        int ans = 0;

        // vector<pair<int, int>> p(n);
        // for (int i = 0; i < n; i++)
        // {
        //     p.push_back({a1[i], b1[i]});
        // }
        // // Solution Starts Here
        // int ans = p[0].first;
        // int x = p[0].second;
        // for (int i = 1; i < p.size(); i++)
        // {
        //     int f = p[i].first;
        //     int s = p[i].second;
        //     if (f > x)
        //     {
        //         ans += f;
        //     }
        //     ans += x;
        //     x = max(x, s);
        //     if (k != 0)
        //         k--;
        //     else
        //         break;
        // }
        // if (k != 0)
        // {
        //     int extra = k * x;
        //     ans += extra;
        // }
        int maxi = 0;
        int val = 0;
        for (int i = 0; i < min(n, k); i++)
        {
            val += a1[i];
            maxi = max(maxi, b1[i]);
            ans = max(ans, val + maxi * (k - i - 1));
        }
        cout << ans << endl;
    }
    return 0;
}
