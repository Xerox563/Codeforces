#include <bits/stdc++.h>
using namespace std;

bool subsetSum(int w, int arr[], int n)
{
    bool dp[n + 1][12];
    // initialisation..

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {
            if (i == 0)
            {
                dp[i][j] = false;
            }
            if (j == 0)
            {
                dp[i][j] = true;
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < w + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][w];
}

int main()
{
    int arr[] = {2, 3, 7, 8, 10};
    int w = 11;
    int n = sizeof(arr) / sizeof(arr[0]);

    if (subsetSum(w, arr, n))
    {
        cout << "Subset Found !!" << endl;
    }
    else
    {
        cout << "Subset Not Found !!" << endl;
    }
    return 0;
}
