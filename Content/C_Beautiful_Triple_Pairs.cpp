#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long ans = 0;
        for (int j = 0; j <= n - 3; ++j)
        {
            int cnt = 0;
            if (arr[j] != arr[j + 1])
                cnt++;
            if (arr[j + 1] != arr[j + 2])
                cnt++;
            if (arr[j + 2] != arr[j + 3])
                cnt++;
            if (cnt == 1)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
