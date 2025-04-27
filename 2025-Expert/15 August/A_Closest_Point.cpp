#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // Solution Part
        /* sort(arr.begin(), arr.end());
         unordered_set<int> st(arr.begin(), arr.end());
         int mini = arr[0];
         int maxi = arr[n - 1];
         int need = (mini + maxi) / 2;
            */
        if (n >= 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (abs(arr[0] - arr[1]) == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
