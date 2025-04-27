#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        // Solution begins
        int cnt = 0;
        for (int i = 0; i < n; i+=k)
        {
            if (s[i] == 'W')
            {
                i+=1;
            }
            if (s[i] == 'B')
            {
                s[i] = 'W';
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
