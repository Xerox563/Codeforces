#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin >> tc;

    while (tc--)
    {
        ll n, k;
        cin >> n >> k;

        // Solution Goes Here
        // if (k > n || ((n & 1) && !(k & 1)) || ((n % 2 == 0) && k > n / 2) || (!(n & 1) && (k & 1)))
        // {
        //     cout << "NO" << endl;
        //     continue;
        // }
        // else
        // {
        //     cout << "YES" << endl;
        // }

        if (k > n)
        {
            cout << "NO" << endl;
            continue;
        }
        if ((n - k + 1) & 1)
        {
            cout << "YES" << endl;
            for (int i = 1; i < k; i++)
            {
                cout << 1 << " ";
            }
            cout << n - k + 1 << endl;
        }

        else if ((n - 2 * (k - 1)) % 2 == 0 && (n - 2 * (k - 1)) > 0)
        {
            cout << "YES" << endl;
            for (int i = 1; i < k; i++)
            {
                cout << 2 << " ";
            }
            cout << n - 2 * (k - 1) << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
