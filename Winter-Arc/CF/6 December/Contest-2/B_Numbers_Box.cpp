#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        // Solution Goes Here
        int neg = 0, sum = 0, mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum += abs(arr[i][j]);
                if (arr[i][j] < 0)
                {
                    neg++;
                }
                mini = min(mini, abs(arr[i][j]));
            }
        }
        if (neg & 1)
        {
            // odd
            cout << (sum - (2 * mini)) << endl;
        }
        else
        {
            // even
            cout << sum << endl;
        }
    }
    return 0;
}

// By Xerox