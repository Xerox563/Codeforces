#include <bits/stdc++.h>
using namespace std;

void solve(int sum, string &ans)
{
    for (int d = 9; d > 0; d--)
    {
        if (sum >= d)
        {
            ans = ans + char('0' + d);
            sum -= d;
        }
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
        int sum;
        string ans;
        cin >> sum;
        solve(sum, ans);
        reverse(ans.begin(),ans.end());
        cout << ans << endl;
    }

    return 0;
}
