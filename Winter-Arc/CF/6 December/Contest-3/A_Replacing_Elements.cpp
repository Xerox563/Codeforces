#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin >> tc;

    while (tc--)
    {
        ll n, d;
        cin >> n >> d;
        vector<int> arr(n);
        for (int i = -0; i < n; i++)
        {
            cin >> arr[i];
        }

        // Solution Goes Here

        sort(arr.begin(), arr.end());
        int maxi = arr[n - 1];
        int f = arr[0];
        int s = arr[1];
        if (f + s > d && maxi > d)
        {
            cout << "NO" << endl;
            continue;
        }
        // bool flag = true;

        // for (int i = 2; i < n; i++)
        // {
        //     if (arr[i] > f + s)
        //     {
        //         flag = false;
        //         break;
        //     }
        // }

        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
