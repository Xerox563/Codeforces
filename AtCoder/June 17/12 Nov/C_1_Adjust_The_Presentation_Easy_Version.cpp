#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, m, q;
    cin >> n >> m >> q;

    vector<ll> a(n), b(m);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;

    vector<ll> pos(n + 1, -1);
    for (int i = 0; i < n; i++)
    {
        pos[a[i]] = i;
    }

    ll currentPosition = 0;
    map<ll, bool> visited;

    for (int i = 0; i < m; i++)
    {
        ll requiredPos = pos[b[i]];
        if (visited[b[i]])
            continue;

        if (currentPosition == requiredPos)
        {
            currentPosition++;
            visited[b[i]] = true;
        }
        else
        {
            cout << "TIDAK" << endl;
            return;
        }
    }
    cout << "YA" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
