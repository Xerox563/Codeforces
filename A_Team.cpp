#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, c, ans = 0;
    while (n--)
    {
        cin>>a>>b>>c;
        if (a + b + c > 1)
        {
            ans += 1;
        }
    }

    cout << ans << endl;

    return 0;
}