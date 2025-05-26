#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<char, int> mp;

    for (auto i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }

    for (auto &x : mp)
    {
        char ch = x.first;
        int freq = x.second;

        if (freq != 0 && k != 0)
        {
            for (auto i = 0; i < n; i++)
            {
                if (s[i] == ch)
                {
                    s[i] = '$';
                    k--;
                    freq--;

                    if (k == 0)
                    {
                        break;
                    }
                }
            }
        }
    }

    for (auto ch : s)
    {
        if (ch != '$')
        {
            cout << ch;
        }
    }
    cout << endl;

    return 0;
}
