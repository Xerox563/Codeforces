#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s.empty() || s.size() == 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}
