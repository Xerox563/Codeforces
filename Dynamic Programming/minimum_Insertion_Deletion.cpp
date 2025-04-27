#include <bits/stdc++.h>
using namespace std;
int LCS(string s1, string s2, int n, int m)
{
    int dp[n + 1][m + 1];
    memset(dp, -1, sizeof(dp));
    int maxLen = 0;
    if (n == 0 || m == 0)
    {
        return 0;
    }
    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }

    if (s1[n - 1] == s2[m - 1])
    {
        dp[n][m] = 1 + LCS(s1, s2, n - 1, m - 1);
        return dp[n][m];
    }
    else
    {
        dp[n][m] = max(LCS(s1, s2, n - 1, m), LCS(s1, s2, n, m - 1));
        return dp[n][m];
    }
}
int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "geeks";
    int n = s1.length();
    int m = s2.length();
    int len_LCS = LCS(s1, s2, n, m);
    int insertions = s2.length() - len_LCS;
    int deletions = s1.length() - len_LCS;
    cout << insertions + deletions << endl;
    return 0;
}