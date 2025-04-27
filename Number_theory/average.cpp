#include <bits/stdc++.h>
using namespace std;
void solve(int *arr, int n, int k, int v)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int len = n + k;
    int temp = v * len;
    int diff = temp - sum;
    int ans = diff / k;
    if (diff > 0 && diff % k == 0)
    {
        cout << ans << endl;
    }
    else
    {

        cout << -1 << endl;
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k, v;
        cin >> n >> k >> v;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n, k, v);
    }
    return 0;
}