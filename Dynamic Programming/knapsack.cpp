#include <bits/stdc++.h>
using namespace std;

int knapSack(int cap, int weight[], int profit[], int n, int dp[][51])
{
    // base case
    if (n == 0 || cap == 0)
    {
        return 0;
    }
    if (dp[n][cap] != -1)
    {
        return dp[n][cap];
    }
    //
    if (weight[n - 1] <= cap)
    {
        // include or not include..
        return dp[n][cap] = max(profit[n - 1] + knapSack(cap - weight[n - 1], weight, profit, n - 1, dp),
                                knapSack(cap, weight, profit, n - 1, dp));
    }
    else
    {
        return dp[n][cap] = knapSack(cap, weight, profit, n - 1, dp);
    }
}

int main()
{
    int profit[] = {60, 100, 120};
    int weight[] = {10, 20, 30};
    int cap = 50;
    int n = sizeof(profit) / sizeof(profit[0]);

    int dp[n + 1][51]; // Define array with fixed size for the second dimension
    memset(dp, -1, sizeof(dp));

    cout << knapSack(cap, weight, profit, n, dp);
    return 0;
}
