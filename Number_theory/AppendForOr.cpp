#include <bits/stdc++.h>
using namespace std;
void solve(int *arr, int n, int y)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans | arr[i];
    }
    int final = ans ^ y;
    if ((final | ans) == y)
    {
        cout << final << endl;
        return;
    }
    cout << -1 << endl;
}
// void pgsolve()
// {
//     int n, y;
//     cin >> n >> y;
//     int a = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         a |= x;
//     }

//     int ans = a ^ y;
//     if ((ans | a) == y)
//     {
//         cout << ans << endl;
//         return;
//     }
//     cout << -1 << endl;
// }
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, y;
        cin >> n >> y;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n, y);
    }
    return 0;
}