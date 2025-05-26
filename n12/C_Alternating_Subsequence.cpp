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
        vector<long long> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        // Solution Goes Here
        /*
         * Try Positive with Negative that yields positive sum
         * Use Two Pointer
         */
        long long i = 1;
        long long sum = 0;
        set<long long> s;
        while (i <= n)
        {
            if (arr[i] < 0)
            {
                while (arr[i] < 0 && i <= n)
                {
                    s.insert(arr[i]);
                    i++;
                }
            }
            else
            {
                while (arr[i] > 0 && i <= n)
                {
                    s.insert(arr[i]);
                    i++;
                }
            }
            auto it = s.rbegin();
            sum += *it;
            s.clear();
        }

        cout << sum << endl;

        // int i = 0, j = 1;
        // long long sum = 0;
        // while (j < n)
        // {
        //     if ((arr[i] < 0 && arr[j] >= 0) || (arr[j] < 0 && arr[i] >= 0))
        //     {
        //         long long t = arr[i] + arr[j];
        //         if (t > 0)
        //         {
        //             sum += t;
        //         }
        //     }
        //     i++;
        //     j++;
        // }
        // if (sum == 0)
        // {
        //     cout << "-1" << endl;
        // }
        // else
        // {
        //     cout << sum << endl;
        // }
    }
    return 0;
}