#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>
#include <bits/stdc++.h>
#include <math.h>
#include <climits>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <utility>
#define ll long long
#define ull unsigned long long int
#define int int64_t
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define pb push_back
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define vin(x, v)     \
    for (auto &x : v) \
        cin >> x;
#define vout(x, v)   \
    for (auto x : v) \
        cout << x << " ";
#define MEM(a, b) memset(a, (b), sizeof(a))
#define forl for (int i = 0; i < n; i++)
#define loop(i, j, k) for (int i = j; i < k; i += 1)
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
#define rep(i, j) loop(i, 0, j)
#define rrep(i, j) rloop(i, j, 0)
#define MP make_pair
#define endl "\n"
#define INF (int)1e18
#define EPS 1e-18
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MODD 998244353

#define isortarr(arr, n) sort(arr, arr + n)
#define dsortarr(arr, n) sort(arr, arr + n, greater<int>())
#define isortvect(v) sort(v.begin(), v.end())
#define dsortvect(v) sort(v.begin(), v.end(), greater<>());
#define isortstrng(str) sort(str.begin(), str.end())
#define dsortstrng(str) sort(str.begin(), str.end(), greater<char>())
#define ltransfr(str) transform(str.begin(), str.end(), str.begin(), ::tolower)
#define utransfr(str) transform(str.begin(), str.end(), str.begin(), ::toupper)
#define ct(x) cout << x
#define cn(x) cin >> x
#define deb(x) cout << #x << "=" << x << endl
#define debb(x, y) cout << #x << "=" << x << " , " << #y << "=" << y << endl
#define cp(t) \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;
int zero = 0;


signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cp(t)
    {
        int n;
        cin >> n;
        int ar[n];
        forl
        {
            cin >> ar[i];
        }
        int ans = -1;
        for (int j = 0; j <= n; j++)
        {
            int cnt = 0;
            forl
            {
                if (ar[i] > j) // false
                {
                    cnt++;
                }
            }
            if (cnt == j)
            {
                ans = j;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}