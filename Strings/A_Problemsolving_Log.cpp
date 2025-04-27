#include <bits/stdc++.h>
using namespace std;
// int solve(string str, int n)
// {
//     /*   int ans = 0;
//        unordered_set<char> st;
//        for (int i = 0; i < str.length(); i++)
//        {
//            if ((str[i] - 'A' + 1) <= dur)
//            {
//                if (st.find(str[i]))
//                {
//                    dur -= (str[i] - 'A' + 1);
//                    continue;
//                }
//                ans++;
//                dur -= (str[i] - 'A' + 1);
//                st.insert(str[i]);
//            } else {
//                break;
//            }
//        }
//        return ans;  */
// }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ans = 0;
        map<char, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[str[i]]++;
        }
        for(auto x : mp)
        {
            if (x.second >= (x.first - 'A' + 1))
            {
                ans++;
            }
        }
        return ans;
    }
    return 0;
}