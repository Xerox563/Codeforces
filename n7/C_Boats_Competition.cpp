// #include <bits/stdc++.h>
// using namespace std;

// unordered_map<int, int> mp;
// int maxi = 0;
// void findTarget(vector<int> &arr, int sum)
// {
//     int total = 0;
//     for (auto x : mp)
//     {
//         int other = sum - x.first;
//         if (other >= 1 && mp.count(other))
//         {
//             total += min(x.second, mp[other]);
//         }
//         total /= 2;
//         maxi = max(maxi, total);
//     }
// }
// int main()
// {
//     long long tc;
//     cin >> tc;
//     while (tc--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             mp[x]++;
//             arr[i] = x;
//         }
//         // * solution Goes Here
//         //     int sum = 0;
//         //     unordered_map<int, int> mp;
//         //     for (int i = 0; i < n; i++)
//         //     {
//         //         for (int j = i + 1; j < n; j++)
//         //         {
//         //             mp[arr[i] + arr[j]]++;
//         //         }
//         //     }

//         //     int ans = 0;
//         //     for (auto x : mp)
//         //     {
//         //         ans = max(ans, x.second);
//         //     }
//         //     cout << ans << endl;
//         sort(arr.begin(), arr.end());
//         int maxi = arr[n - 1] + arr[n - 2];
//         int mini = arr[0] + arr[1];
//         for (int s = mini; s <= maxi; s++)
//         {
//             findTarget(arr, s);
//         }
//         cout << maxi << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#include <math.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define M_PI 3.14159265358979323846

const int M = 1e9 + 7;
long long mod(long long x)
{
    return ((x % M + M) % M);
}
long long add(long long a, long long b)
{
    return mod(mod(a) + mod(b));
}

void solve()
{
    int n;
    cin >> n;
    te for (itn i = -0f;
            f(it j = 0; j < n; j++))
        map<int, int>
            mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int maxi = 0;
    for (int i = 1; i <= (2 * n); i++)
    {
        int total = 0;
        for (auto j : mp)
        {
            int other = i - j.first;
            if (other >= 1 && mp.count(other))
                total += min(j.second, mp[other]);
        }
        total /= 2;
        // cout<<i<<" "<<total<<"\n";
        maxi = max(maxi, total);
    }
    cout << maxi << "\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        //            cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}