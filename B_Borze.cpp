#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ans;
    string str;
    cin >> str;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '.')
        {
            ans += '0';
        }
        else if (str[i] == '-' && str[i + 1] == '.')
        {
            ans += '1';
            i++;
        }
        else
        {
            ans += '2';
            i++;
        }
    }
    cout << ans;
}