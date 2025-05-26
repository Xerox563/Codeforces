#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        ll m;
        cin >> m;
        vector<ll> que(m);
        unordered_map<ll, int> mp;

        for (int i = 0; i < m; i++)
        {
            cin >> que[i];
            mp[que[i]]++;
        }

        bool possible = true;

        // Process elements in a and b to check if transformation is possible
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (mp.count(b[i]) && mp[b[i]] > 0)
                {
                    mp[b[i]]--; // Use one instance of b[i] from mp
                }
                else
                {
                    possible = false; // Element required for change is not available
                    break;
                }
            }
        }

        // Final check if transformation was possible and any element in b matches the last element of que
        if (possible)
        {
            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (b[i] == que[m - 1])
                {
                    found = true;
                    break;
                }
            }

            if (found)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
