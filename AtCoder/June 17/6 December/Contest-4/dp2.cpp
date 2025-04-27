//
#include <bits/stdc++.h>
using namespace std;

int n, t;
vector<int> x;
int dp[105][10100];

bool canSum(int level, int left)
{
    // Pruning: if current sum exceeds the target, return false
    if (t < 0)
        return false;

    // Base case: if we've considered all items
    if (level == n)
        return left == 0;

    // Cache check
    if (dp[level][left] != -1)
        return dp[level][left];

    // Compute: try excluding and including the current item
    bool include = canSum(level + 1, left - x[level]);
    bool exclude = canSum(level + 1, left);

    // Save result in dp table and return
    return dp[level][left] = (include || exclude);
}

int main()
{
    cin >> n;
    x.resize(n);

    for (int i = 0; i < n; i++)
        cin >> x[i];
    cin >> t;

    // Initialize dp array with -1
    memset(dp, -1, sizeof(dp)); // O(#S) + O(DP) -> refreshing + recompute the values whenever needed (rest all recurence happening in code -> O(1))

    int q;
    cin >> q;
    while (q--)
    {
        cin >> t;
        if (canSum(0, t))
            cout << "1\n"; // Subset found
        else
            cout << "0\n"; // No subset found
    }

    return 0;
}

// * ||  O(N*T*Q) -> O(N*T + Q)