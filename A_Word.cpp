#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int lowers = 0;
    int uppers = 0;
    for (auto ch : s)
    {
        if (isupper(ch))
        {
            uppers++;
        }
        else
        {
            lowers++;
        }
    }
    string ans = "";
    if (lowers == uppers)
    {
        for (auto x : s)
        {
            ans += tolower(x);
        }
    }
    else if (lowers > uppers)
    {
        for (int i = 0; i < s.length(); i++)
        {
            ans += tolower(s[i]);
        }
    }
    else
    {
        {
            for (int i = 0; i < s.length(); i++)
            {
                ans += toupper(s[i]);
            }
        }
    }
    cout << ans << endl;
    return 0;
}