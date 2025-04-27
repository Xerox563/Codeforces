#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int ans = 0;

        while (b > 0 && c > 1)
        {
            ans += 3;
            b -= 1;
            c -= 2;
        }

        while (a > 0 && b > 1)
        {
            ans += 3;
            a -= 1;
            b -= 2;
        }
        cout << ans << endl;
    }

    return 0;
}