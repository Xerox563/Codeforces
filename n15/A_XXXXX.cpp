// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     ll tc;
//     cin >> tc;
//     while (tc--)
//     {
//         ll n, x;
//         cin >> n >> x;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         // * Solution Goes Here
//         int ans = -1;
//         ll sum = 0;
//         sum = accumulate(arr.begin(), arr.end(), 0);
//         if (sum % x != 0)
//         {
//             ans = arr.size();
//         }
//         else
//         {
//             int l = 0;
//             int r = n - 1;
//             while (l <= r)
//             {
//                 if (sum - arr[l] % x == 0 && sum - arr[r] % x == 0)
//                 {
//                     sum -= arr[l];
//                     l++;
//                     sum -= arr[r];
//                     r--;
//                 }
//                 else
//                 {
//                     ans = max(ans, r - l + 1);
//                 }
//             }
//             cout << ans << endl;
//         }
//         // ll sum = 0;
//         // for (int i = 0; i < n; i++)
//         // {
//         //     sum += arr[i];
//         //     if (sum % x == 0)
//         //     {
//         //         sum -= arr[i];
//         //     }
//         //     else
//         //     {
//         //         len++;
//         //     }
//         // }
//         // ll maxLen = 0;
//         // for (int i = 0; i < n; i++)
//         // {
//         //     ll len = 0;
//         //     ll sum = 0;
//         //     for (int j = i; j < n; j++)
//         //     {
//         //         sum += arr[j];
//         //         if (sum % x == 0)
//         //         {
//         //             sum -= arr[j];
//         //         }
//         //         else
//         //         {
//         //             len++;
//         //         }
//         //     }
//         //     maxLen = max(len, maxLen);
//         // }

//         // if (maxLen != 0)
//         // {
//         //     cout << maxLen << endl;
//         // }
//         // else
//         // {
//         //     cout << -1 << endl;
//         // }
//     }
//     return 0;
// }

// /*
//  * find the length of the longest subarray such that is sum is 'not divisible by x' .
//  * or determine that it does not exist
//  *
//  */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);

        int total_sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            total_sum += a[i];
        }

        // If total sum is not divisible by x, the entire array is the answer
        if (total_sum % x != 0)
        {
            cout << n << endl;
            continue;
        }

        // Otherwise, we need to exclude elements from the beginning or the end
        int left = -1, right = -1;

        // Find first element from the left that is not divisible by x
        for (int i = 0; i < n; ++i)
        {
            if (a[i] % x != 0)
            {
                left = i;
                break;
            }
        }

        // Find first element from the right that is not divisible by x
        for (int i = n - 1; i >= 0; --i)
        {
            if (a[i] % x != 0)
            {
                right = i;
                break;
            }
        }

        if (left == -1 && right == -1)
        {
            // All elements are divisible by x
            cout << -1 << endl;
        }
        else
        {
            // Max length by excluding prefix or suffix
            cout << max(n - left - 1, right) << endl;
        }
    }

    return 0;
}
