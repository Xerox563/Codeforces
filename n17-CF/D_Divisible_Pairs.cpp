#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    // Your code logic goes here
    ll n, x, y;
    cin >> n >> x >> y;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if ((arr[i] + arr[j]) % x == 0 && (arr[i] - arr[j]) % y == 0)
    //         {
    //             ans++;
    //         }
    //     }
    // }
    map<ll, map<ll, ll>> mp;
    for (int i = 0; i < n; i++)
    {
        ans += mp[(x - arr[i] % x) % x][arr[i] % y];
        mp[arr[i] % x][arr[i] % y]++;
    }
    cout << ans << endl;
}

int main()
{

    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}