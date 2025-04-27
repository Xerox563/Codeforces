#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lcm(a, b) (((a) / gcd(a, b)) * (b))

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll g = arr[0], l = arr[1];

    for (int i = 2; i < n; i++)
    {
        if (i % 2 == 0)
            g = gcd(g, arr[i]);
        else
            l = lcm(l, arr[i]);
    }

    // if (l % g != 0)
    // {
    //     cout << g << "\n";
    //     return;
    // }

    bool ok = true;
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] % g == 0)
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        cout << g << "\n";
        return;
    }

    g = arr[1];
    l = arr[0];

    for (int i = 2; i < n; i++)
    {
        if (i % 2 == 1)
            g = gcd(g, arr[i]);
        else
            l = lcm(l, arr[i]);
    }

    ok = true;
    for (int i = 0; i < n; i += 2)
    {
        if (arr[i] % g == 0)
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        cout << g << "\n";
    }
    else
    {
        cout << "0\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
