#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    // Your code logic goes here
    ll n;
    cin >> n;
    // Solution Goes Here
    unordered_map<ll, ll> position;
    vector<ll> a(n + 1), b(n + 1);

    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        position[a[i]] = i;
    }

    for (ll i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    // ll ans = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int curr = t2[i];
    //     int j = i + 1;
    //     ll cnt = 0;
    //     while (j < n && t1[j] < curr)
    //     {
    //         cnt++;
    //         j++;
    //     }
    //     ans = max(ans, cnt);
    // }
    // cout << ans << endl;

    for (ll i = n; i > 1; i--)
    {
        if (position[b[i]] < position[b[i - 1]])
        {
            cout << i - 1 << endl;
            return;
        }
    }

    cout << 0 << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}