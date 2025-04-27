#include <bits/stdc++.h>
using namespace std;
bool mp[126] = {false};
string ans = "";

void removeDuplicates(string str, int idx)
{
    // base case
    if (idx == str.length())
    {
        cout << ans << endl;
    }
    char curr = str[idx];
    if (mp[curr - 'a'] == false)
    {
        ans += curr;
        mp[curr - 'a'] = true;
    }
    // recursive call for the next elements..
    removeDuplicates(str, idx + 1);
}
int main()
{
    string str = "axybxbcxbdMmNn";

    removeDuplicates(str, 0);
    return 0;
}