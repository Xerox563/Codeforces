#include <bits/stdc++.h>
using namespace std;
void solve(string s)
{
    string ans = "";
    vector<int> lens;
    int maxLen = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (ans.find(s[i]) != string ::npos)
        {
            // if char found in string ans..
            ans = "";
            lens.push_back(maxLen);
            maxLen = 0;
        }
        else
        {
            // if char not found in string ans..
            ans += s[i];
            maxLen++;
        }
    }
    lens.push_back(maxLen);
    cout << *max_element(lens.begin(), lens.end()) << endl;
}
int main()
{
    // your code goes here
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
