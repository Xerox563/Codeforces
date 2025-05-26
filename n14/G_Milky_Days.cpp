#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        /* code */
        long long n, m, k;
        cin >> n >> m >> k;
        vector<pair<int, int>> v(n);
        int s = INT_MAX;
        int e = INT_MIN;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for (int i = 0; i < n; i++)
        {
            long long d, a;
            cin >> d >> a;
            s = min(s, d);
            e = max(s, d);
            v.push_back({d, a});
        }
        long long ans = 0;
        for (int i = s; i <= e; i++)
        {
            int d = v[i].first;
            int a = v[i].second;
            if (a >= k)
            {
                ans++;
                a -= k;
                if (a != 0)
                {
                    pq.push({d + k - 1, a});
                }
            }
            else
            {
            }
        }
    }

    return 0;
}