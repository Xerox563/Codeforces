#include <bits/stdc++.h>
using namespace std;
int solve(string str, int n)
{
    unordered_map<char, int> mp;
    int i = 0, j = 0;
    int maxi = INT_MIN;
    while (j < n)
    {
        // p-1
        mp[str[j]]++;
        // p-2
        if (j - i + 1 < mp.size())
        {
            j++;
        }
        else if (j - i + 1 == mp.size())
        {
            maxi = max(maxi, j - i + 1);
            j++;
        }
        // p-3
        else
        {
            while (j - i + 1 > mp.size())
            {

                mp[str[i]]--;

                if (mp[str[i]] == 0)
                {
                    mp.erase(str[i]);
                }
                i++;
            }
            j++;
        }
    }
    return maxi;
}
int main()
{
    string str = "abcdefabef";
    int n = str.length();
    int ans = solve(str, n);
    cout << ans << endl;
    return 0;
}