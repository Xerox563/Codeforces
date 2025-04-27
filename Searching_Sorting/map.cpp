#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    map<char, int> mp;
    int maxi = 0;
    for (auto c : str)
    {
        maxi = max(maxi, ++mp[c]);
    }

    for (auto c : str)
    {
        if (mp[c] == maxi)
        {
            cout << mp[c];
        }
        cout << endl;
    }
    return 0;
}