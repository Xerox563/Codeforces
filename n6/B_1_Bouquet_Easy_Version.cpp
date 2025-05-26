// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n, amount;
//     cin >> n >> amount; // n -> flowers in showrrom  m-> coins she have
//     vector<int> a(n);   // petals in the ith Flower
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a.begin(), a.end());
//     int s = 0;
//     int e = n - 1;
//     // vector<int> temp;
//     int ans = 0;
//     while (s < e)
//     {
//         if (a[e] - a[s] > 1)
//         {
//             s++;
//         }
//         else
//         {
//             // temp.push_back(a[s]);
//             // s++;
//             while (a[e] <= amount && s < e)
//             {
//                 ans += a[e];
//                 amount -= a[e];
//                 e--;
//             }
//         }
//     }
// }

// signed main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; ++i)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 2e5 + 20;
int n, m, a[N];

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0;

        sort(a, a + n);
        a[n] = -1;

        for (int i = 0; i < n;)
        {
            int j = i;
            while (a[j] == a[i])
                j++;

            int l = j;
            while (a[l] == a[i] + 1)
                l++;

            for (int c = 0; c <= j - i; c++)
            {
                if (c * a[i] > m)
                    continue;

                int val = c * a[i];
                int t = min((m - val) / (a[i] + 1), l - j);

                val += t * (a[i] + 1);

                ans = max(ans, val);
            }

            i = j;
        }

        cout << ans << '\n';
    }
}