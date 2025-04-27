#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        int n, k, v_t, p_t;
        cin >> n >> k >> v_t >> p_t;

        vector<int> time(n);
        for (int i = 0; i < n; i++)
        {
            cin >> time[i];
        }

        int cnt = 0; // Number of packs used
        int i = 0;

        while (i < n)
        {
            // Open a new pack at time[i]
            cnt++;
            int curr_t = time[i];
            int max_p_t = curr_t + p_t;
            int max_v_t = max_p_t + v_t;

            int doses_left = k;
            while (i < n && time[i] <= max_v_t && doses_left > 0)
            {
                doses_left--;
                i++;
            }
        }
        cout << cnt << endl; // Output the number of packs used
    }

    return 0;
}
