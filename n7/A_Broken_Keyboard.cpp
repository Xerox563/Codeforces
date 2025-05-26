#include <bits/stdc++.h>
using namespace std;
bool ans[26];
int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        memset(ans, 0, sizeof(ans));
        string str;
        cin >> str;
        // Solution Goes Here

        for (int i = 0; i < str.length(); i++)
        {
            int j = i;
            while (j + 1 < str.length() && str[j + 1] == str[i])
            {
                j++;
            }
            if ((j - i) % 2 == 0)
            {
                ans[str[i] - 'a'] = true;
            }
            i = j;
        }
        for (int i = 0; i < 26; i++)
        {
            if (ans[i] == true)
            {
                cout << char('a' + i);
            }
        }
        cout << endl;
    }
    return 0;
}