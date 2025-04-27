#include <bits/stdc++.h>
using namespace std;
void solve(string str)
{
    unordered_map<string, int> mp;
    int cnt = 0;
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        cnt++;
        ans += str[i];
        if (cnt > 1)
        {
            mp[ans]++;
            ans.erase(ans.begin(), ans.end() - 1);
            cnt = 1;
        }
    }
    int answ = 0;
    for (auto x : mp)
    {
        answ++;
    }
    cout << answ << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}