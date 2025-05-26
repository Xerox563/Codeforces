#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int temp = x ^ y;

        int ans = 1;
        while ((temp & 1) == 0)
        {
            temp >>= 1;
            ans <<= 1;
        }
        cout << ans << "\n";
    }
    return 0;
}
