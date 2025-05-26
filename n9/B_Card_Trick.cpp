#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long tc;
    cin >> tc;
    while (tc--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }
        cout << arr[sum % n] << endl;
    }
    return 0;
}