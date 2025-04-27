#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int p[n];
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    /*
     for (int i = 0; i < n; i++)
        {
            p[i] = 0;
            for (int j = 0; j <= i; j++)
            {
                p[i] += arr[j];
            }
        }

        Method-2
         int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        p[i] = sum;
    }

      Method-3
       p[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        p[i] = p[i-1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    */
    int q;
    cin >> q;
    int p[n];
    p[0] = 0;
    for (int i = 1; i < n; i++)
    {
        p[i] = p[i - 1] + arr[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        // int sum = 0;
        // for (int i = l; i <= r; i++)
        // {
        //     sum += arr[i];
        // }
        // cout << sum << endl;
        if (l != 0)
        {
            int ans = p[r] - p[l - 1];
            cout << ans << endl;
        } else {
            cout<<p[r]<<endl;
        }
    }
    return 0;
}