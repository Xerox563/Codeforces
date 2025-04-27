#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        char c;
        cin >> n >> c;
        string str;
        cin >> str;

        // Extend the string to simulate circular behavior
        string s = str + str;
        vector<int> nextG(2 * n, INT_MAX);

        // Precompute nearest 'g' positions
        for (int i = 2 * n - 1; i >= 0; i--)
        {
            if (s[i] == 'g')
                nextG[i] = i;
            else if (i < 2 * n - 1)
                nextG[i] = nextG[i + 1];
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                if (nextG[i] < INT_MAX)
                {
                    ans = max(ans, nextG[i] - i);
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
