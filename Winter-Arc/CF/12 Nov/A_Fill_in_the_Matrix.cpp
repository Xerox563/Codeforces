#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
#define nl "\n"

// Function to calculate minimum excluded number (mex)
ll mex(vector<ll> &arr)
{
    set<ll> s;
    for (ll i = 0; i <= arr.size(); i++)
        s.insert(i);
    for (auto i : arr)
        s.erase(i);
    return *s.begin();
}

// Function to calculate the beauty of the matrix
ll beauty(vector<vector<ll>> &ans)
{
    vector<ll> arr;
    ll n = ans.size(), m = ans[0].size();
    for (ll i = 0; i < m; i++)
    {
        vector<ll> col;
        for (ll j = 0; j < n; j++)
        {
            col.push_back(ans[j][i]);
        }
        arr.push_back(mex(col));
    }
    return mex(arr);
}

// Function to solve each test case
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> ans(n, vector<ll>(m, 0));
    ll sr = 0;
    for (ll i = 0; i < n; i++)
    {
        if (sr < m - 1)
            sr++;
        ll sc = sr;
        for (ll j = 0; j < m; j++)
        {
            ans[i][sc] = j;
            sc = (sc + 1) % m;
        }
    }
    cout << beauty(ans) << nl;
    for (auto &row : ans)
    {
        for (auto &val : row)
            cout << val << " ";
        cout << nl;
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
