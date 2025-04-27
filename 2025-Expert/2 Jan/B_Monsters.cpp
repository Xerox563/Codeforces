#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &x : a)
        {
            cin >> x;
            x %= k;
            if (!x)
                x = k; // Handle cases where x % k == 0
        }

        // Priority queue to sort based on modulo values and indices
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push({a[i], -i}); // Use -i to ensure tie-breaking by smaller index
        }

        // Extract elements from the priority queue
        while (!pq.empty())
        {
            cout << -pq.top().second + 1 << ' '; // Convert back to 1-based index
            pq.pop();
        }
        cout << endl;
    }
    return 0;
}
