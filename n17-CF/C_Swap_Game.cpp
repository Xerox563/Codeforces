// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ll tc;
//     cin >> tc;
//     ll n;
//     cin >> n;
//     vector<int> arr(n + 1);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> arr[i];
//     }
//     // Solution Goes Here
//     // * chance -> Alice(0) , BOb(1);

//     // decrease a1 by 1 then first check if a1 = 0 if its is then whom turn it is will lose .
//     // else swap with a[i];

//     int chance = 0; // Alice
//     for (int i = 2; i <= n; i++)
//     {
//         if (chance == 0)
//         {
//             // Alice chance
//             arr[1] -= 1; // Decrease arr[1] by 1
//             if (arr[1] == 0)
//             {
//                 cout << "Bob" << endl;
//                 return 0;
//             }
//             swap(arr[1], arr[i]);
//             chance++;
//         }
//         else
//         {
//             // Bobs chance
//             arr[1] -= 1;
//             if (arr[1] == 0)
//             {
//                 cout << "Alice" << endl;
//                 return 0;
//             }
//             swap(arr[1], arr[i]);
//             chance--;
//         }
//     }
//     char ch;
//     if (chance == 0)
//     {
//         ch = 'A';
//         // cout<<"Bob"<<endl;
//     }
//     else
//     {
//         ch = 'B';
//         // cout<<"Alice"<<endl;
//     }
//     if (arr[1] & 1)
//     {
//         if (ch == 'A')
//         {
//             cout << "B" << endl;
//         }
//         else
//         {
//             cout << "A" << endl;
//         }
//     }
//     else
//     {
//         if (ch == 'A')
//         {
//             cout << "A" << endl;
//         }
//         else
//         {
//             cout << "B" << endl;
//         }
//     }

//     return 0;
// }

// /*
//  * Alice Takes the first move.
//  *
//  */

// Jai Shree Ram

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define ll long long
#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl "\n"
#define x first
#define y second
#define gcd(a, b) __gcd(a, b)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define sz(a) (int)a.size()
#define pii pair<int, int>
#define hell 1000000007
#define elasped_time 1.0 * clock() / CLOCKS_PER_SEC

template <typename T1, typename T2>
istream &operator>>(istream &in, pair<T1, T2> &a)
{
    in >> a.x >> a.y;
    return in;
}
template <typename T1, typename T2>
ostream &operator<<(ostream &out, pair<T1, T2> a)
{
    out << a.x << " " << a.y;
    return out;
}
template <typename T, typename T1>
T maxs(T &a, T1 b)
{
    if (b > a)
        a = b;
    return a;
}
template <typename T, typename T1>
T mins(T &a, T1 b)
{
    if (b < a)
        a = b;
    return a;
}

int solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin() + 1, a.end());
    cout << (a[0] > a[1] ? "Alice" : "Bob") << endl;
    return 0;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#ifdef SIEVE
    sieve();
#endif
#ifdef NCR
    init();
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}