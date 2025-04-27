#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t;
    cin >> t;
    string str;
    cin >> str;
    while (t--)
    {
        for (int i = 1; i <= n; i++)
        {
            if (str[i - 1] == 'B' && str[i] == 'G')
            {
                str[i] = 'B';
                str[i - 1] = 'G';
                i++;
            }
        }
    }
    cout << str;

    return 0;
}