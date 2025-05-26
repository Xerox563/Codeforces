#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        int n, need, m;
        cin >> n >> need >> m;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
            v.push_back({l, r});
        }
        // Solution goes Here
        int maxDiff = 0;
        maxDiff = max(maxDiff, abs(v[0].first - 0));
        int x = v[0].second;
        for (int i = 1; i < v.size(); i++)
        {
            int s = v[i].first;
            int e = v[i].second;
            maxDiff = max(maxDiff, abs(s - x));
            x = e;
        }
        maxDiff = max(maxDiff, m - x);
        if (maxDiff >= need)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
