#include <bits/stdc++.h>
using namespace std;
long long calculate(vector<long long> &v, int s, int e)
{
    long long maxi = LLONG_MIN;
    long long max_e = 0;
    for (int i = s; i <= e; i++)
    {
        max_e = max_e + v[i];
        if (maxi < max_e)
        {
            maxi = max_e;
        }
        if (max_e < 0)
        {
            max_e = 0;
        }
    }
    return maxi;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int p = 0;
        long long ans = LLONG_MIN;
        for (int i = 1; i < n; i++)
        {
            if (abs(v[i] % 2) == abs(v[i - 1] % 2))
            {
                ans = max(ans, calculate(v, p, i - 1));
                p = i;
            }
        }
        ans = max(ans, calculate(v, p, n - 1));
        cout << ans << endl;
    }

    return 0;
}