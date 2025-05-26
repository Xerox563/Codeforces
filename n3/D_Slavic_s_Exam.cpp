#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string &s, string &t)
{
    auto it = t.begin();
    for (char c : s)
    {
        if (c == *it)
            it++;
        if (it == t.end())
            return true;
    }
    return it == t.end();
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        string s, t;
        cin >> s >> t;

        int n = s.size();
        int m = t.size();

        // Try to match 't' with 's' by filling in '?'
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                if (j < m)
                {
                    s[i] = t[j++];
                }
                else
                {
                    s[i] = 'a'; // Arbitrary character
                }
            }
            else if (j < m && s[i] == t[j])
            {
                j++;
            }
        }

        // After replacing, check if `t` is a subsequence of `s`
        if (isSubsequence(s, t))
        {
            cout << "YES\n"
                 << s << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
