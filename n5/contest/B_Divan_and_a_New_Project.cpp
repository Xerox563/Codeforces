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
        vector<int> times(n);
        for (int i = 0; i < n; i++)
        {
            cin >> times[i];
        }

        int mid = (n + 1) / 2;
        vector<int> arr;
        arr.push_back(mid);
        for (int i = 1; i <= n + 1; i++)
        {
            if (i != mid)
            {
                arr.push_back(i);
            }
        }

        vector<int> diff(n);
        for (int i = 1; i <= n; i++)
        {
            diff[i - 1] = abs(mid - arr[i]);
        }

        sort(times.rbegin(), times.rend());
        sort(diff.begin(), diff.end()); // Corrected to sort in ascending order

        int res = 0;
        for (int i = 0; i < n; i++)
        {
            res += 2 * (times[i] * diff[i]);
        }
        cout << res << endl;

        for (int i = 0; i <= n; i++) // Loop corrected to include the last element
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
