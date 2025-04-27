#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

vector<int> memo;

int countWays(int k)
{
    // Base cases
    if (k == 0)
        return 1; // One way to get sum 0 (by doing nothing)
    if (k < 0)
        return 0; // No way to get a negative sum

    // Check memo table to avoid re-computation
    if (memo[k] != -1)
        return memo[k];

    // Calculate the number of ways to form sum k
    int ways = 0;
    for (int i = 1; i <= 6; ++i)
    {
        ways = (ways + countWays(k - i)) % MOD;
    }

    // Store the result in memo array
    memo[k] = ways;
    return ways;
}

int main()
{
    int n;
    cin >> n;

    // Initialize memoization array with -1 (indicating not calculated yet)
    memo.assign(n + 1, -1);

    // Get the result for the sum n
    cout << countWays(n) << endl;
    return 0;
}
