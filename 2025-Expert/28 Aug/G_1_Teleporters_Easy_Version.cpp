
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define debug(n) cout << (n) << endl;
#define pb push_back
const ll INF = 2e18 + 99;

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false), cin.tie(nullptr);
//     long long tc;
//     cin >> tc;
//     while (tc--)
//     {
//         int n, coins;
//         cin >> n >> coins;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//             cin >> arr[i];

//         // Solution Goes Here .....
//         vector<bool> vis(false);
//         sort(arr.begin(), arr.end());
//         int ans = 0;
//         int j = 0;
//         vis[0] = true;
//         for (int i = 1; i < n; i++)
//         {
//             //* To reach i and from i(0) to j (teleport -> i + arr[i])
//             int needed = i + arr[i];
//             if (coins >= needed)
//             {
//                 coins -= needed;
//                 ans++;
//             }
//         }
//         // vector<bool> vis(false);
//         // sort(arr.begin(), arr.end());
//         // int ans = 0;
//         // int j = 0;
//         // vis[0] = true;
//         // for (int i = 0; i < n; i++)
//         // {
//         //     // coins -= 1;
//         //     while (vis[j] != false)
//         //     {
//         //         j++;
//         //         coins -= 1;
//         //     }
//         //     if (coins >= arr[j])
//         //     {
//         //         coins -= arr[j];
//         //         vis[j] = true;
//         //         j = 0;
//         //         ans++;
//         //     }
//         // }
//         cout << ans << endl;
//     }
//     return 0;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        vector<ll> arr;
        ll x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr.pb(x + i + 1);
        }
        sort(arr.begin(), arr.end());
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (c >= arr[i])
            {
                c -= arr[i];
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }
}
