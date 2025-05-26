#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string s;
    cin >> s;

    ll ans = 0;

    for (int i = 0; i < n;)
    {
        char current_char = s[i];
        priority_queue<int> pq;
        int j = i;

        while (j < n && s[j] == current_char)
        {
            pq.push(arr[j]);
            j++;
        }

        for (int count = 0; count < k && !pq.empty(); count++)
        {
            ans += pq.top();
            pq.pop();
        }

        i = j;
    }

    cout << ans << endl;
}

int main()
{
    long long t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
