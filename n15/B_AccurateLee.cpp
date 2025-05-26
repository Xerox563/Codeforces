#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        string s;
        cin >> n >> s;
        int zeroes = 0, ones = 0;
        // * Solution Goes Here
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                // starting zeroes
                zeroes++;
            }
            else
            {
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                // starting zeroes
                ones++;
            }
            else
            {
                break;
            }
        }
        if (ones + zeroes == n)
        {
            cout << s << endl;
        }
        else
        {
            string ans = "";
            while (zeroes--)
            {
                ans += (char)('0');
            }
            ans += (char)('0');
            while (ones--)
            {
                ans += (char)('1');
            }
            cout << ans << endl;
        }
    }
    return 0;
}

/*
 * Cleaner String -> Either the shortest string or the lexicographically smaller.
 * We can erase only one Character at a time. (either s[i] = '1' or s[i+1] = '0').
 * Just Count Out the leading Zeros and Trailing Ones and in between just put 0 and return the string.
 */