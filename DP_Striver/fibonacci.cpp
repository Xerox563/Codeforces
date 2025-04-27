#include <bits/stdc++.h>
using namespace std;
int fib(vector<int> &dp, int n)
{
    if (n <= 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = fib(dp, n - 1) + fib(dp, n - 2);
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
   // cout << fib(dp, n);
    // memset(dp,-1,sizeof dp);

    // space optimised
    int prev2 = 0;
    int prev = 1;
    for (int i = 2;i<=n;i++) {
        int curri = prev + prev2;
        prev2 = prev;
        prev = curri;
    }
    cout<<prev;
     return 0;
}
