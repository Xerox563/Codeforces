#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // Lets Progress the Solution .
    int maxLen = 1;
    int len = 1;
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            if (v[i] >= v[i - 1])
            {
                len++;
                maxLen = max(maxLen, len);
            }
            else
            {

                len = 1;
            }
        }
    }

    cout << maxLen;

    return 0;
}