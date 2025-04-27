#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> arr, int n)
{
    int o = 0;
    int e = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != arr[i] % 2)
        {
            if (i % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
    }
    if (o != e)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << e << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n; // Initialize n before reading elements
        int moves = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n);
    }

    return 0;
}
