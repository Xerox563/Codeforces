#include <bits/stdc++.h>
using namespace std;
int solve(long long n, long long k, vector<int> v)
{
    int cnt = 0;
    int ele = v[k-1];
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= ele )
        {
            if (v[i] != 0)
            {
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
    long long n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << solve(n, k, v);
    return 0;
}