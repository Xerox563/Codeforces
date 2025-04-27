#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n; // no. of athletes
    cin >> n;
    int s[n], e[n];

    while (t--)
    {

        for (int i = 0; i < n; ++i)
        {
            cin >> s[i] >> e[i];
            cout << endl;
        }
        bool flag = true;
        int temp_w = s[0];
        int temp_e = e[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] >= temp_w)
            {
                if (e[i] >= temp_e)
                {
                    flag = false;
                }
            }
        }

        if (flag == true)
        {
            cout << temp_w << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
