#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;

    if (n == 0)
    {
        // If n is 0, we can't process the array.
        return;
    }

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Preprocessing
    vector<int> nxt(n);
    nxt[n - 1] = n; // out-of-bounds mark as n
    for (int i = n - 2; i >= 0; i--)
    {
        nxt[i] = (arr[i] == arr[i + 1] ? nxt[i + 1] : i + 1);
    }

    // Number of queries
    ll q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--; // convert to 0-based indexing
        r--;

        if (l < 0 || r >= n || l > r)
        {
            // Invalid query bounds
            cout << -1 << " " << -1 << endl;
            continue;
        }

        if (nxt[l] <= r)
        {
            // Found range with equal values
            cout << l + 1 << " " << nxt[l] + 1 << endl; // Convert back to 1-based
        }
        else
        {
            // No equal values in the range
            cout << -1 << " " << -1 << endl;
        }
    }
}

int main()
{
    // Reading from input.txt and writing to output.txt, remove if unnecessary

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
