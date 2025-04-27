#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x;
        cin >> x; // length -> n
        string s;
        cin >> s; // length -> m

        // Proceeding to the solution part...
        string ans = x;
        int cnt = 0;
        if (x == s)
        {
            cout << "0" << endl;
            continue;
        }

        while (n < m)
        {
            cnt++;
            x += x;
            n += n;
        }

        if (x.find(s) != string::npos)
        {
            cout << cnt << endl;
            continue;
        }

        x += x;
        if (x.find(s) != string::npos)
        {
            cout << cnt + 1 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
