#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    map<long long, long long> mp;
    while (n--)
    {
        long long s, e;
        cin >> s >> e;

        // * Code Goes Here
        mp[s]++;
        mp[e]--;
    }
    long long sum = 0;
    long long ans = 0;
    for (auto x : mp)
    {
        sum += x.second;
        ans = max(ans, sum);
    }
    cout << ans << endl;
    return 0;
}