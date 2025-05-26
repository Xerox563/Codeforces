#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll n;
    cin >> n;
    vector<ll> arr(n);
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr[i] = x;
    }
    // * Solution Goes Here
    sort(arr.begin(), arr.end(), greater<int>());
    for (ll i = 0; i < n; i++)
    {
        vector<int> ans(n);
        if (arr[i] % 3 == 0)
        {
            if (mp.find(arr[i] % 3) != mp.end())
            {
            }
        }
    }
    return 0;
}