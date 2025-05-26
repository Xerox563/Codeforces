#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, k, q;
    cin >> n >> k >> q;
    vector<long long> temp(200001, 0);
    vector<long long> bt(200001, 0);

    for (int i = 0; i < n; i++)
    {
        long long x, y;
        cin >> x >> y;
        temp[x]++;
        temp[y + 1]--;
    }
    long long sum = 0;
    for (int i = 1; i < 200001; i++)
    {
        sum += temp[i];
        bt[i] = sum;
        if (bt[i] >= k)
        {
            // temp. is immeccible
            bt[i] = 1;
        }
        else
        {
            bt[i] = 0;
        }
    }

    // bt[i] = 1 -> temperature is idmissible bt[i] = 0 -> not idmissible
    for (int i = 1; i < 200001; i++)
    {
        bt[i] += bt[i - 1];
    }
    while (q--)
    {
        long long x, y;
        cin >> x >> y;
        long long ans = bt[y];
        if (x - 1 >= 0)
        {
            ans -= bt[x - 1];
        }
        cout << ans << endl;
    }
    return 0;
}