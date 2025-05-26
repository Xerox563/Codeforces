#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    if (n < 5)
    {
        cout << "-1" << endl;
        return;
    }

    vector<int> result = {1, 3, 5, 4, 2};

    for (int i = 6; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            result.insert(result.begin() + 4, i); // Insert between 4 and 2
        }
        else
        {
            result.push_back(i);
        }
    }

    for (auto x : result)
    {
        cout << x << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
