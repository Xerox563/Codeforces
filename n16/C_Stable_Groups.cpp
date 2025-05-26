// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ll n, k, diff;
//     cin >> n >> k >> diff;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // * Solution Goes Here

//     sort(arr.begin(), arr.end());
//     // We can have two possiblities either we can get the longets group from back or the longets group form the start

//     int left = 0;

//     // * from start
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (arr[i + 1] - arr[i] <= diff)
//         {
//             continue;
//         }
//         else
//         {
//             if (k != 0)
//             {
//                 // we had to add some value
//                 int ind = i + 1;
//                 int val = arr[i] + diff;
//                 arr.insert(arr.begin() + ind, val);
//                 k--;
//             }
//             else
//             {
//                 left++;
//             }
//         }
//     }
//     if (arr[n - 1] - arr[n - 2] > diff)
//     {
//         left++;
//     }

//     // * from end
//     int right = 0;
//     for (int i = n - 1; i >= 1; i++)
//     {
//         if (arr[i] - arr[i - 1] <= diff)
//         {
//             continue;
//         }
//         else
//         {
//             if (k != 0)
//             {
//                 // we had to add some value
//                 int ind = i - 1;
//                 int val = arr[i - 1] + diff;
//                 arr.insert(arr.begin() + ind, val);
//                 k--;
//             }
//             else
//             {
//                 right++;
//             }
//         }
//     }
//     if (arr[1] - arr[0] > diff)
//     {
//         right++;
//     }

//     cout << max(left, right) << endl;
//     return 0;
// }

// /*
//  * split the students into stable groups
//  * stable groups -> If in sorted array of their levels no two neigbouring elements differ by more than x;
//  * (abs(arr[i] - arr[i-1]) <= x)
//  * Find minimum no. of stable groups from all students including the (atmost k invited students).
//  */

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     ll n, k, diff;
//     cin >> n >> k >> diff;
//     vector<int> arr(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     sort(arr.begin(), arr.end());

//     int left_groups = 1;
//     ll remaining_k = k;

//     for (int i = 0; i < n - 1; i++)
//     {
//         int gap = arr[i + 1] - arr[i];
//         if (gap > diff)
//         {
//             int need = (gap - 1) / diff; // Calculate the number of students needed
//             if (remaining_k >= need)
//             {
//                 remaining_k -= need; // Use k to fill the gap
//             }
//             else
//             {
//                 left_groups++; // Can't fill the gap, so start a new group
//             }
//         }
//     }
//     cout << left_groups << endl;

//     // int right_groups = 1;
//     // remaining_k = k;

//     // for (int i = n - 1; i > 0; i--)
//     // {
//     //     int gap = arr[i] - arr[i - 1];
//     //     if (gap > diff)
//     //     {
//     //         int need = (gap - 1) / diff;
//     //         if (remaining_k >= need)
//     //         {
//     //             remaining_k -= need;
//     //         }
//     //         else
//     //         {
//     //             right_groups++;
//     //         }
//     //     }
//     // }

//     // cout << min(left_groups, right_groups) << endl;
//     return 0;
// }

#include <bits/stdc++.h>
#define int unsigned long long int
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        int ar[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> ar[i];
        }
        sort(ar, ar + n);
        vector<int> v;
        for (int i = 0; i < n - 1; ++i)
        {
            if (ar[i + 1] - ar[i] > x)
            {
                v.push_back(ar[i + 1] - ar[i]);
            }
        }
        sort(v.begin(), v.end());
        int i = 0;
        while (i < v.size())
        {
            if ((v[i] - 1) / x <= k)
            {
                k -= (v[i] - 1) / x;
                i++;
            }
            else
            {
                break;
            }
        }
        cout << v.size() - i + 1 << "\n";
    }
}