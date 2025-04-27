#include <bits/stdc++.h>
using namespace std;
string distinct(const string &str)
{
    set<char> st;
    for (char c : str)
    {
        if (isalpha(c))
        {
            st.insert(c);
        }
    }

    string res(st.begin(), st.end());
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        string dist = distinct(str);
        unordered_map<char, char> mp;
        int m = dist.size();
        for (int i = 0; i < m; i++)
        {
            mp[dist[i]] = dist[m - i - 1];
        }

        string ans = "";
        for (char ch : str)
        {
            ans += mp[ch];
        }
        cout << ans << endl;
    }
    return 0;
}
