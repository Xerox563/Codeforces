// #include <bits/stdc++.h>
// using namespace std;
// bool solve(vector<int> &arr, int target)
// {
//     int i = 0;
//     int j = 1;
//     int sum = 0;
//     while (j < arr.size())
//     {
//         sum += arr[j];
//         if (sum == target)
//         {
//             return true;
//         }
//         else if (sum > target)
//         {
//             sum -= arr[i];
//             i++;
//         }
//         else
//         {
//             j++;
//         }
//     }
//     return false;
// }
// int main()
// {
//     long long n;
//     cin >> n;
//     vector<int> arr(n);
//     long long sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         sum += x;
//     }

//     // * Solution Goes Here
//     sort(arr.begin(), arr.end());
//     long long int target = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > target)
//         {
//             break;
//         }
//         target += arr[i];
//     }
//     cout << target << endl;

//     // int s = 1;
//     // int e = sum;
//     // int ans = -1;
//     // while (s <= e)
//     // {
//     //     int mid = s + (e - s) / 2;
//     //     if (solve(arr, mid) == true)
//     //     {
//     //         ans = mid;
//     //         e = mid - 1;
//     //     }
//     //     else
//     //     {
//     //         s = mid + 1;
//     //     }
//     // }

//     // cout << ans << endl;
//     // // vector<int> ans;
//     // // sort(arr.begin(), arr.end());
//     // // for (int i = 0; i < n; i++)
//     // // {
//     // //     int num = 0;
//     // //     for (int j = i; j < n; j++)
//     // //     {
//     // //         num += arr[j];
//     // //         ans.push_back(num);
//     // //     }
//     // // }

//     // // sort(ans.begin(), ans.end());
//     // // int res = 0;
//     // // for (int i = 1; i < ans.size(); i++)
//     // // {
//     // //     if (ans[i] - ans[i - 1] > 1)
//     // //     {
//     // //         res = ans[i - 1] + 1;
//     // //     }
//     // // }
//     // // cout << res << endl;
//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> coins(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    // Sort the coins in ascending order
    sort(coins.begin(), coins.end());

    long long int target = 1; // Smallest sum that cannot be formed
    for (int i = 0; i < n; i++)
    {
        // If the current coin is greater than the target, we found the answer
        if (coins[i] > target)
        {
            break;
        }

        // Otherwise, update the target by adding the current coin
        target += coins[i];
    }

    cout << target << endl;

    return 0;
}
