#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve()
{
    int len;
    cin >> len;
    string final = "";
    string str;
    cin >> str;

    bool flag = false;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e')
        {
            final += str[i];
            flag = true;
            if (i + 2 < len && (str[i + 2] == 'a' || str[i + 2] == 'e'))
            {
                final += '.';
                flag = false;
            }
        }
        else
        {
            final += str[i];
            if (flag == true)
            {
                final += '.';
                flag = false;
            }
        }
    }

    if (final.back() == '.')
    {
        final.pop_back();
    }

    cout << final << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}