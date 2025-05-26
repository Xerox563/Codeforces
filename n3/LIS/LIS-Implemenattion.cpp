#include <bits/stdc++.h>
using namespace std;
int solve(int ind, int prev, vector<int> &arr, vector<vector<int>> &dp)
{
    if (ind == n)
        return 0;
    if (dp[ind][prev + 1] != -1)
    {
        return dp[ind][prev] + 1;
    }
    int noTake = 0 + solve(ind + 1, prev, arr, dp);
    int take = INT_MAX;
    if (arr[ind] > prev || prev == -1)
    {
        take = 1 + solve(ind + 1, ind, arr, dp);
    }
    return dp[ind][prev + 1] = max(take, notTake);
}
int LIS(vector<int> arr, int n)
{
    vector<vector<int>> dp(n, vector<int> (n + 1, -1));
    return solve(0, -1, arr, dp);
}
int main()
{
    vector<int> arr = {12, 23, 24, 45, 67, 23, 56, 90, 87};
    int n = arr.size();
    cout << LIS(arr, n);
    return 0;
}