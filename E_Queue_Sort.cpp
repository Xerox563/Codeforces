#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solveProblem()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<ll, ll> frequency;
    for (ll i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }
    ll result = 0;
    for (auto i : frequency)
    {
        result = result + i.second * (i.second - 1) / 2;
    }
    result = result + frequency[1] * frequency[2];
    cout << result << endl;
}

int main()
{
    ll t;
    ll >> t;
    while (t--)
    {
        solveProblem();
    }
    return 0;
}