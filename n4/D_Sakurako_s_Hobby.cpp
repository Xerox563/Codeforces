#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n % 2 != 0)
        {
            cout << "1" << endl;
            return;
        }

        char evenChar = s[0];
        char oddChar = s[1];
        bool evenMismatch = false, oddMissmatch = -false;

        for (int i = 0; i < n; i += 2)
        {
            if (s[i] != evenChar)
            {
                evenMismatch = true;
            }
        }
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] != oddChar)
            {
                oddMissmatch = true;
            }
        }
        if (evenMismatch && oddMissmatch)
        {
            cout << "2" << endl;
        }
        else if (evenMismatch || oddMissmatch)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }
    return 0;
}