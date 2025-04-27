#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        // Solution Goes Here
        int cnt = 0;
        map<char, int> frequency;
        for (char c : s)
            frequency[c]++;

        for (int i = 0; i < s.size(); i++)
            if (--frequency[s[i]] == 0)
            {
                cout << s.substr(i) << "\n";
                break;
            }

        // map<char, int> mp;
        // for (int i = 0; i < n; i++)
        // {
        //     mp[s[i]]++;
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     char ch = s[i];
        //     bool f = false;
        //     if (mp.find(ch) != mp.end())
        //     {
        //         if (mp[ch] > i)
        //         {
        //             f = true;
        //         }
        //     }
        //     if (f == true)
        //     {
        //         cnt++;
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     bool f = false;
        //     for (int j = i + 1; j < n; j++)
        //     {
        //         if (s[i] == s[j])
        //         {
        //             f = true;
        //         }
        //     }
        //     if (f == true)
        //     {
        //         cnt++;
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }
        // if (cnt > 0)
        // {

        //     cout << s.substr(cnt) << endl;
        // }
        // else
        // {
        //     cout << s << endl;
        // }
    }
    return 0;
}