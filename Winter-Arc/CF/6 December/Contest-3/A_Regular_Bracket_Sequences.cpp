#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin >> tc;

    while (tc--)
    {
        ll n;
        cin >> n;

        for (ll i = 1; i <= n; ++i)
        {
            // Create `i` pairs of `()` at the beginning
            string result = string(i, '(') + string(i, ')');
            // Append remaining parentheses pairs
            result += string(n - i, '(') + string(n - i, ')');
            cout << result << endl;
        }
    }
    return 0;
}
