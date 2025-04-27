#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    if (a > 0)
    {
        a--;
        ans++;
    }
    if (b > 0)
    {
        b--;
        ans++;
    }
    if (c > 0)
    {
        c--;
        ans++;
    }
    if (a > 0 && b > 0)
    {
        a--;
        b--;
        ans++;
    }
    if (a > 0 && c > 0)
    {
        a--;
        c--;
        ans++;
    }
    if (b > 0 && c > 0)
    {
        b--;
        c--;
        ans++;
    }
    if (a > 0 && b > 0 && c > 0)
        ans++;
    cout << ans;
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