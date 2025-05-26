#include <bits/stdc++.h>
using namespace std;

int getSize(const string &s)
{
    set<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string t = "";
        for (int j = i; j < s.length(); j++)
        {
            t += s[j];
            st.insert(t); // Insert substring into the set
        }
    }
    return st.size(); // Return the size of the set (number of distinct substrings)
}

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s.size() == 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            // For each prefix of the string, calculate the number of distinct substrings
            for (int i = 0; i < s.length(); i++)
            {
                string t = s.substr(0, i + 1); // Get prefix up to index i
                int temp = getSize(t);         // Calculate the distinct substrings for this prefix

                if (temp % 2 == 0)
                {
                    // Even number of distinct substrings
                    cout << t << endl;
                    break; // Stop after finding the first even count
                }
            }
        }
    }

    return 0;
}

// Corrected Solution
#include <bits/stdc++.h>
using namespace std;

const int N = 3e5 + 9;
using ll = long long;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i + 1 < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            cout << s.substr(i, 2) << '\n';
            return;
        }
    }
    for (int i = 0; i + 2 < n; i++)
    {
        if (s[i] != s[i + 1] and s[i] != s[i + 2] and s[i + 1] != s[i + 2])
        {
            cout << s.substr(i, 3) << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
