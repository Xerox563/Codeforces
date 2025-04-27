#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pq.push(x);
            a[i] = x;
        }
        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        // Solution Goes Here
        for (int i = 0; i < m; i++)
        {
            int y = b[i];
            int top = pq.top();
            pq.pop();
            pq.push(y);
        }
        long long ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}