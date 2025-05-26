#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        string s, t;
        cin >> s;
        cin >> t;

        // Solution Goes Here
        ll l = 0;
        ll r = n - 1;
        while (s[l] == t[l])
        {
            l++;
        }
        while (s[r] == t[r])
        {
            r++;
        }
        int t1 = 0;
        int t2 = 0;
        for (int i = l; i <= r; i++)
        {
            t1 ^= s[i];
        }
        for (int i = l; i <= r; i++)
        {
            t2 ^= t[i];
        }
        if (t1 == t2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}