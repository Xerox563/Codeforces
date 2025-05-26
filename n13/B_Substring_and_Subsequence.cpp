// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// // Function to calculate the longest common subsequence length
// int LCS(const string &a, const string &b)
// {
//     int m = a.size();
//     int n = b.size();
//     vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

//     // DP to calculate the LCS
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (a[i - 1] == b[j - 1])
//             {
//                 dp[i][j] = dp[i - 1][j - 1] + 1;
//             }
//             else
//             {
//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }
//     }
//     return dp[m][n];
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string a, b;
//         cin >> a >> b;

//         int lcs_length = LCS(a, b);
//         int min_length = a.size() + (b.size() - lcs_length);

//         cout << min_length << endl;
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
        string a, b;
        cin >> a >> b;

        // Solution Goes Here
        int m = a.length();
        int n = b.length();
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            long ind = i;
            int ans = 0;
            for (int j = 0; j < m; j++)
            {
                if (a[j] == b[ind])
                {
                    ind++;
                    ans++;
                    if (ind == b.length())
                        break;
                }
            }
            res = max(res, ans);
        }
        cout << m + n - res << endl;
    }
    return 0;
}
