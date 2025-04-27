#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    char ch = str[0];
    if (islower(ch))
    {
        ch = ch - 32;
    }
    string ans = "";
    ans.push_back(ch);
    for (int i = 1; i < str.length(); i++)
    {
        ans.push_back(str[i]);
    }
    cout << ans << endl;
    return 0;
}