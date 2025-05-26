// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
//     ll tc;
//     cin >> tc;
//     while (tc--) {
//         ll n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         if (arr[0] == 1) {
//             cout << "NO" << endl;
//             continue;
//         }

//         vector<int> val;
//         int curr = 1;
//         for (int i = 1; i < n; i++) {
//             if (arr[i] != arr[i - 1]) {
//                 val.push_back(curr);
//                 curr = 1;
//             } else {
//                 curr++;
//             }
//         }
//         val.push_back(curr);

//         cout << "YES" << endl;

//         for (int i = 0; i < val.size(); i += 2) {
//             if (i + 1 < val.size()) {
//                 for (int j = 0; j < val[i] - 1; j++) cout << "0 ";
//                 for (int j = 0; j < val[i + 1]; j++) cout << "0 ";
//                 cout << val[i + 1] << " ";
//             } else {
//                 for (int j = 0; j < val[i]; j++) cout << "0 ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

using lli = long long int;
using vi = vector<int>;

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (int &x : a)
        cin >> x;

    if (a[n - 1] == 1)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        for (int i = n - 1; i >= 0;)
        {
            if (a[i] == 0)
            {
                int j = i - 1;
                if (j < 0)
                {
                    cout << 0 << "\n";
                    break;
                }
                int cnt = 0;
                while (j >= 0 && a[j] == 1)
                {
                    cout << 0 << ' ';
                    ++cnt;
                    --j;
                }
                i = j;
                cout << cnt << ' ';
            }
            else
            {
                --i;
            }
        }
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
