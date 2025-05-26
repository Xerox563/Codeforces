#include <iostream>
#include <bits/stdc++.h>
#define ll int
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

void solve()
{
    ll n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    vector<vector<ll>> freA(26, vector<ll>(n, 0));
    vector<vector<ll>> freB(26, vector<ll>(n, 0));
    for (ll i = 0; i < n; i++)
    {
        freA[int(a[i]) - 'a'][i]++;
    }
    for (ll i = 0; i < n; i++)
    {
        freB[int(b[i]) - 'a'][i]++;
    }
    for (ll i = 0; i < 26; i++)
    {
        for (ll j = 1; j < n; j++)
        {
            freA[i][j] += freA[i][j - 1];
            freB[i][j] += freB[i][j - 1];
        }
    }

    // for(ll i=0;i<26;i++)
    // {
    //     for(ll j=0;j<n;j++)
    //     {
    //         cout<<freB[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    for (ll i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        ll cnt = 0;
        ll countOfA = 0;
        ll countOfB = 0;
        ll diff = 0;
        for (ll j = 0; j < 26; j++)
        {
            countOfA = freA[j][r];
            countOfB = freB[j][r];
            if (l > 0)
            {
                countOfA -= freA[j][l - 1];
                countOfB -= freB[j][l - 1];
            }

            diff += abs(countOfA - countOfB);
            //  cout << j << " -> " << countOfA << " :: " << countOfB << endl;
        }
        cnt += diff / 2;

        cout << cnt << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}