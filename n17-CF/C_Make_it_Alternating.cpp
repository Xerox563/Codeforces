// #include <bits/stdc++.h>
// using namespace std;

// int res(int cnt)
// {
//     int ans = 1;
//     for (int i = 2; i <= cnt; i++)
//     {
//         ans *= i;
//     }
//     return ans;
// }

// void solve()
// {
//     string s;
//     cin >> s;
//     int rem = 0;  // Number of operations required
//     int ways = 1; // Number of ways to make alternating

//     for (int i = 0; i < s.length();)
//     {
//         int cnt = 1;
//         while (i + cnt < s.length() && s[i] == s[i + cnt])
//         {
//             cnt++;
//         }
//         if (cnt > 1)
//         {
//             rem += (cnt - 1);
//             ways = (1LL * ways * cnt) % 998244353; // Calculate factorial for ways modulo 998244353
//         }
//         i += cnt;
//     }

//     cout << rem << " " << ways << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int main()
{
    ios;
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("/Users/sreejith/Desktop/output.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    ll mod = 998244353;
    while (t--)
    {
        ll n, extras = 0, min_ops = 0, factorial = 1, res = 1;
        string s;
        cin >> s;
        vector<ll> v;
        n = (ll)s.size();
        for (ll i = 0; i < (n - 1); i++)
        {
            if (s[i] == s[i + 1])
            {
                extras++;
            }
            else
            {
                min_ops += extras;
                extras++;
                res = (res % mod * extras % mod) % mod;
                extras = 0;
            }
        }
        if (extras != 0)
        {
            min_ops += extras;
            extras++;
            res = (res % mod * extras % mod) % mod;
        }
        for (ll i = 1; i <= min_ops; i++)
        {
            factorial = ((factorial % mod) * (i % mod)) % mod;
        }
        res = ((res % mod) * (factorial % mod)) % mod;
        cout << min_ops << " " << res << endl;
    }
    return 0;
}
