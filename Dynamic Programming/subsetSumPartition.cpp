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
vector<int> dp[i][j];

for(int i=0;i<n;i++) {
    if(arr[i]% 2 == 0) {
        return true;
    } else {
        return false;
    }
    if(k < n) {
        return true;
    } else {
        return false;
    }
}

bool equalSumPartition(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (sum % 2 == 1)
    {


        return false;
    }
    else
    {
        return subsetSum(sum / 2, arr, n);
    }
}

int main()

{
    int arr[] = {1, 5, 12, 15};
    // int w = 11;
    int n = sizeof(arr) / sizeof(arr[0]);
    if (equalSumPartition(arr, n))
    {
        cout << "Equal Sum Partition Possible !!" << endl;
    }

    else
    {
        cout << "Equal Sum Partition not Possible !!" << endl;
    }
    return 0;
}
