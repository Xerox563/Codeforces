/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int, pair<int, int>>> v;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a - b, {a, b}});
    }

    sort(v.begin(), v.end());

    long long totalCost = 0;

    for (int i = 0; i < k; i++)
    {
        totalCost += v[i].second.first; // Buy at current price a[i]
    }

    for (int i = k; i < n; i++)
    {
        totalCost += min(v[i].second.first, v[i].second.second); // Buy at the cheaper price
    }

    cout << totalCost << endl;

    return 0;
}  */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<pair<int, int>> diff;

    for (int i = 0; i < n; i++)
    {
        diff.push_back({a[i] - b[i], i});
    }

    sort(diff.begin(), diff.end());

    long long totalCost = 0;

    for (int i = 0; i < k; i++)
    {
        int idx = diff[i].second;
        totalCost += a[idx];
    }

    for (int i = k; i < n; i++)
    {
        int idx = diff[i].second;
        totalCost += min(a[idx], b[idx]);
    }

    cout << totalCost << endl;

    return 0;
}
