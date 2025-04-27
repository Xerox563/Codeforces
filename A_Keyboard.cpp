#include <bits/stdc++.h>
using namespace std;
string given = "qwertyuiopasdfghjkl;zxcvbnm,./";
string solve(string str, char ch)
{
    string ans;
    for (int i = 0; i < str.length(); i++)
    {
        int index = given.find(str[i]);
        if (ch == 'R')
        {
            ans += given[index-1];
        } else {
            ans+=given[index + 1];
        }
    }
    return ans;
}
int main()
{
    char ch;
    cin >> ch;
    string str;
    cin >> str;

    cout << solve(str, ch) << endl;
    return 0;
}