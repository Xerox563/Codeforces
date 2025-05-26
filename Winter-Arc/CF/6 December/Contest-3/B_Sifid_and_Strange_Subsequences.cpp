#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> arr(n);
        int cnt = 0;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= 0)
            {
                cnt++;
            }
            else
            {
                mini = min(mini, x);
            }
            arr[i] = x;
        }

        // Solution Goes Here
        sort(arr.begin(), arr.end());

        int m = INT_MAX - 1;
        for (int i = 0; i < n; i++)
        {
            if (i + 1 < n && arr[i] <= 0)
            {
                m = min(m, arr[i + 1] - arr[i]);
            }
        }

        int ans = cnt;
        if (m >= mini)
        {
            ans++;
        }
        cout << ans << endl;

        // int len = 1;
        // int z = 0;
        // sort(arr.begin(), arr.end());
        // int neg = 0;
        // for (int i = 1; i < n; i++)
        // {
        //     if (arr[i] < 0)
        //     {
        //         len++;
        //         neg++;
        //     }
        //     else if (arr[i] == 0)
        //     {
        //         len++;
        //         z++;
        //     }
        // }
        // if (z == 1)
        // {
        //     cout << len + 1 << endl;
        // }
        // else if (z > 1)
        // {
        //     cout << len << endl;
        // }
        // else if (neg == 0)
        // {
        //     cout << 1 << endl;
        // }
        // else if (z == 0)
        // {
        //     cout << len + 1 << endl;
        // }
        // int maxi = arr[0];
        // int mini = arr[0];
        // int curr = arr[0];
        // int len = 1;
        // for (int i = 1; i < n; i++)
        // {
        //     if (abs(maxi - curr) >= curr && abs(mini - curr) >= curr)
        //     {
        //         len++;
        //     }
        //     maxi = max(maxi, curr);
        //     mini = min(mini, curr);
        //     curr = arr[i];
        // }
        // cout << len << endl;
    }

    return 0;
}
