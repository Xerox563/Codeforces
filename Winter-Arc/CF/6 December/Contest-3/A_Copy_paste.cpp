#include <bits/stdc++.h>
using namespace std;
#define ll long long

typedef pair<int, int> pii;

const int MAXN = (int)1e3 + 5;

int n, k;
int arr[MAXN];

void solve()
{
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    int mn = min_element(arr + 1, arr + n + 1) - arr;
    int ans = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (i != mn)
        {
            while (arr[i] + arr[mn] <= k)
            {
                arr[i] += arr[mn];
                ++ans;
            }
        }
    }

    printf("%d\n", ans);
}

int main()
{
    int tt;
    scanf("%d", &tt);

    while (tt--)
    {
        solve();
    }

    return 0;
}