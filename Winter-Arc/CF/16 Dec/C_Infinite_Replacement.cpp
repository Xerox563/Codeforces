#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s, t;
        cin >> s >> t;

        int countA = count(t.begin(), t.end(), 'a');

        if (countA == 1 && t.length() == 1)
        {
            // If t contains exactly one 'a' and no other characters
            cout << "1\n";
        }
        else if (countA == 0)
        {
            // If 'a' is not present in t, the result is 2^s.length()
            cout << (1LL << s.length()) << "\n";
        }
        else
        {
            // If t contains 'a' along with other characters
            cout << "-1\n";
        }
    }

    return 0;
}
