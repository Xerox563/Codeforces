// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long tc;
//     cin >> tc;
//     while (tc--)
//     {
//         long long n, x;
//         cin >> n >> x;
//         vector<long long> arr(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         // Solution Goes Here
//         int i = 0, j = 0;
//         int ans = 0;
//         while (j < n)
//         {
//             int curr = arr[j];
//             int curr1 = curr;
//             int l = curr - x;
//             int r = curr + x;
//             int maxDist = 0;

//             // Case -1
//             i = curr - x;
//             int k = curr - x;
//             while (i < curr + x)
//             {
//                 if (abs(arr[i] - l) <= x)
//                 {
//                     k++;
//                     maxDist = max(maxDist, k);
//                 }
//                 else
//                 {
//                     break;
//                 }
//                 i++;
//             }

//             // Case -2
//             i = curr - 2 * x;
//             k = curr - 2 * x;
//             while (i < curr)
//             {
//                 if (abs(arr[i] - l) <= x)
//                 {
//                     k++;
//                     maxDist = max(maxDist, k);
//                 }
//                 else
//                 {
//                     break;
//                 }
//                 i++;
//             }

//             // Case -3
//             i = curr;
//             k = curr;
//             while (i < curr + 2 * x)
//             {
//                 if (abs(arr[i] - r) <= x)
//                 {
//                     k++;
//                     maxDist = max(maxDist, k);
//                 }
//                 else
//                 {
//                     break;
//                 }
//                 i++;
//             }

//             if (k < n)
//             {
//                 ans++;
//             }
//             j = k;
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // Initialize the range for the first pile
        long long left = arr[0] - x, right = arr[0] + x;
        int ans = 0;

        for (int i = 1; i < n; i++)
        {
            // Update the range based on the current pile
            long long newLeft = arr[i] - x;
            long long newRight = arr[i] + x;

            // Update the valid range for v (intersection of previous and current range)
            left = max(left, newLeft);
            right = min(right, newRight);

            // If there's no overlap, a change is needed
            if (left > right)
            {
                ans++;
                // Set the new valid range based on the current pile
                left = newLeft;
                right = newRight;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
