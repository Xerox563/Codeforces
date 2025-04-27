#include <bits/stdc++.h>
using namespace std;

int solve(string &str, int n, int &k)
{
    unordered_map<char, int> mp;
    int i = 0, j = 0;
    int maxi = INT_MIN;
    while (j < n)
    {
        // p-1
        mp[str[j]]++;
        // p-2
        if (mp.size() < k)
        {
            j++;
        }
        else if (mp.size() == k)
        {
            maxi = max(maxi, j - i + 1);
            j++;
        }
        // p-3
        else
        {
            while (mp.size() > k)
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
    string str = "aabacbebebe";
    int k = 3;
    int n = str.length();
    int ans = solve(str, n, k);
    cout << ans << "";
    return 0;
}