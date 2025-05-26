#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string LCS(string X, string Y, int m, int n)
{
    int maxlen = 0;
    int endingIndex = m;

    int lookup[m + 1][n + 1];

    memset(lookup, 0, sizeof(lookup));

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (X[i - 1] == Y[j - 1])
            {
                lookup[i][j] = lookup[i - 1][j - 1] + 1;

                if (lookup[i][j] > maxlen)
                {
                    maxlen = lookup[i][j];
                    endingIndex = i;
                }
            }
        }
    }

    return X.substr(endingIndex - maxlen, maxlen);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string X, Y;
        cin >> X >> Y;
        int m = X.size(), n = Y.size();
        string ans = LCS(X, Y, m, n);
        int ok = ans.size();
        int c = (m - ok) + (n - ok);
        cout << c << "\n";
    }
    return 0;
}