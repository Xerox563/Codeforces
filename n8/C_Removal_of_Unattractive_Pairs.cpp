#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        string s;
        cin >> n >> s;
        // Solution Goes Here
        int maxFreq = 0;
        unordered_map<char, int> mp;
        for (auto ch : s)
        {
            mp[ch]++;
            maxFreq = max(maxFreq, mp[ch]);
        }
        if (maxFreq > n / 2)
        {
            cout << (n - (n - maxFreq) * 2) << endl;
        }
        else
        {
            cout << n % 2 << endl;
        }
    }
    return 0;
}