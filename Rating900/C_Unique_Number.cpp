#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> v;
        int n;
        cin >> n;
        if (n > 9)
        {
            for (int i = 1; i <= n / 2; i++)
            {
                int a = i;
                int b = n - i;
                v.push_back({a, b});
            }
            vector<int> nums;
            for (auto x : v)
            {
                string num = to_string(x.first);
                num += to_string(x.second);
                int number = stoi(num);
                nums.push_back(number);
            }
            int ans = INT_MAX;
            for (auto y : nums)
            {
                int sum = 0;
                int x = y;
                while (x != 0)
                {
                    sum += x % 10;
                    x /= 10;
                }
                if (sum == n)
                {
                    ans = min(ans, y);
                }
            }
            if (ans != INT_MAX)
            {
                cout << ans << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
        else
        {
            cout << n << endl;
        }
    }

    return 0;
}