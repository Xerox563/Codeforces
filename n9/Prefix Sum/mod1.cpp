#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n + 1], p[n + 1]{};
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i], p[i] = p[i - 1] + arr[i];
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << p[i] << " ";
    // }

    // Brute Force
    // int pref[n] = {};
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         pref[i] += arr[j];
    //     }
    //     cout << pref[i] << " ";
    // }
    // cout << "---------------------------------------------------" << endl;

    // Optimised
    // int pref[n] = {};
    // pref[0] = arr[0];
    // cout << pref[0] << " ";
    // for (int i = 1; i < n; i++)
    // {
    //     pref[i] = arr[i] + pref[i - 1];
    //     cout << pref[i] << " ";
    // }

    // * Queries computation
    int q;
    cin >> q;
    while (q--) // O(q)
    {
        int l, r;
        cin >> l >> r;
 
        // int sum = 0;
        // for (int i = l; i <= r; i++)
        // {
        //     sum += arr[i];
        // }
        // cout << sum;

        cout << p[r] - p[l - 1] << endl; // O(1)
    }

    return 0;
}