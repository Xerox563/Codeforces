#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int arr[n + 1][m + 1], p[n + 1][m + 1]{};
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            cin >> arr[i][j];
            p[i][j] = arr[i][j] + p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1];
        }
        cout << endl;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        // int sum = 0;
        // for (int i = a; i <= c; i++)
        // {
        //     for (int j = b; j <= d; j++)
        //     {
        //         sum += arr[i][j];
        //     }
        // }
        cout << p[c][d] - p[a - 1][d] - p[b - 1][c] + p[a - 1][b - 1] << endl;
    }

    return 0;
}

/*
 * When uu need a sum of a range try to use prefix sums
 * With O(nm) compuations of prefix sum we can copute the sum of any submatrix or Query in O(1). (Range Queries)
 */