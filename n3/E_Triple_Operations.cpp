#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define ull unsigned long long
#define mxx 1e18 - 1
using namespace std;

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

vector<ll> preCompute;

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll ans = 0;
    ll a = l;
    while (a != 0)
    {
        ans++;
        a /= 3;
    }
    ans *= 2;
    ans += (preCompute[r] - preCompute[l]);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    preCompute.resize(200001, 0);
    for (ll i = 1; i <= 200001; i++)
    {
        ll cnt = 0;
        ll val = i;
        while (val != 0)
        {
            val /= 3;
            cnt++;
        }
        preCompute[i] = cnt;
    }
    for (ll i = 1; i <= 200001; i++)
    {
        preCompute[i] += preCompute[i - 1];
    }

    ll tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}