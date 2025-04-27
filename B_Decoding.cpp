#include <bits/stdc++.h>
using namespace std;

void med_char(string str)
{
    // unordered_map<int, int> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     mp[str[i]] = i;
    // }
    // vector<char> ans(n);
    // int median;

    // if (n % 2 == 0)
    // {
    //     median = n / 2 - 1;
    //     ans[mp[str[median]]] = str[median];
    //     str.erase(str.begin() + median);
    // }
    // else
    // {
    //     median = n / 2;
    //     ans[mp[str[median]]] = str[median];
    //     str.erase(str.begin() + median);
    // }

    // for (char x : ans)
    // {
    //     cout << x << " ";
    // }
    int len = str.length();
    vector<char> ans;
    while (len != 0)
    {
        if (len % 2 == 1)
        {
            ans.push_back(str[0]);
        }
        else
        {
            ans.insert(ans.begin(), str[0]);
        }
        str.erase(0, 1);
        len = str.length();
    }
    for(auto x:ans) {
        cout<<x<<"";
    }
}

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    med_char(str);
    return 0;
}
