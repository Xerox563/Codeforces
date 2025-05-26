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

void solve()
{
    ll n;
    cin >> n;
    set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        st.insert(x);
    }
    vector<ll> ans;
    ll cnt = 40;
    while (cnt > 0 && ((*st.rbegin()) != 0))
    {
        ll minValue = (*st.begin());
        ll maxValue = (*st.rbegin());
        if ((minValue + maxValue) % 2 != 0)
        {
            cout << -1 << endl;
            return;
        }
        ll midValue = (minValue + maxValue) / 2ll;
        ans.push_back(midValue);
        set<ll> newSet;
        for (auto it = st.begin(); it != st.end(); it++)
        {
            newSet.insert(abs((*it) - midValue));
        }
        st = newSet;
        cnt--;
    }
    if (st.size() != 1)
    {
        cout << -1 << endl;
        return;
    }
    cout << ans.size() << endl;
    for (ll i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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