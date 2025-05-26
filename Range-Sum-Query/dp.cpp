#include <bits/stdc++.h>
using namespace std;
bool solve(int ind, int target, vector<int> &arr, vector<vector<int>> &dp)
{
    // base case
    if (target == 0)
    {
        return true;
    }
    if (ind == 0)
    {
        return (arr[ind] == target);
    }

    if (dp[ind][target] != -1)
    {
        return dp[ind][target];
    }

    // Pick
    bool pick = false;
    if (arr[ind] <= target)
        pick = solve(ind - 1, target - arr[ind], arr, dp);
    bool notPick = solve(ind - 1, target, arr, dp);

    return dp[ind][target] = pick || notPick;
}

bool solve1(int ind, int target, vector<int> &arr, vector<vector<int>> &dp)
{

    // Base Case
    if (ind == 0)
    {
        if (target % arr[ind] == 0)
        {
            return target / arr[ind];
        }
        else
        {
            return 1e9;
        }
    }

    if (dp[ind][target] != -1)
    {
        return dp[ind][target];
    }
    //  Recurence
    int pick = 1e9;
    if (arr[ind <= target])
    {
        pick = 1 + solve1(ind, target - arr[ind], arr, dp);
    }
    int notPick = 0 + solve1(ind - 1, target, arr, dp);
}
bool subsetSum(vector<int> &arr, int n, int target)
{
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
    solve(n - 1, target, arr, dp);
}
int main()
{
    vector<int> arr = {2, 3, 4, 5, 7, 9};
    int n = arr.size();
    subsetSum(arr, n, 14);

    return 0;
}

for (int i = 0; i < n; i++)
{
    for (int j = 0lj < n; i++)
    {
        if (nums[i] + nums[j] < 0)
        {
            return true;
        }
    }
}
