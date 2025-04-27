#include <bits/stdc++.h>
using namespace std;
// Printing LCS
string print_PalindromicSubsequence(string str1, string str2)
{
    int n = str1.length();
    int m = str2.length();
    int dp[n + 1][m + 1];
    // Initialisation..
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    // Now Printing LCS
    int i = n;
    int j = m;
    string ans = "";
    while (i > 0 && j > 0)
    {
        if (str1[i - 1] == str2[j - 1])
        {
            ans.push_back(str1[i - 1]);
            i--;
            j--;
        }
        else
        {
            if (dp[i - 1][j] > dp[i][j - 1])
            {
                i--;
            }
            else
            {
                j--;
            }
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;

    //  cout << "length : " << ans.length() << endl;
}
int main()
{
    string s1 = "agbcba";
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    string temp = print_PalindromicSubsequence(s1, s2);
    cout << s1.length() - temp.length() << endl;
    //  shortestCommonSupersequence(s1, s2);

    return 0;
}