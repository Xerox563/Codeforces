#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x1, p1, x2, p2;
        cin >> x1 >> p1;
        cin >> x2 >> p2;
        if (p1 == p2)

            p1 = 0, p2 = 0;

        else if (p1 > p2)

            p1 = p1 - p2, p2 = 0;

        else

            p2 = p2 - p1, p1 = 0;

        for (int i = 0; i < p1; i++)
        {
            x1 *= 10;
        }

        for (int i = 0; i < p2; i++)
        {
            x2 *= 10;
        }
        if (x1 > x2)
            cout << ">" << endl;
        if (x1 == x2)
            cout << "=" << endl;
        if (x1 < x2)
            cout << "<" << endl;
    }

    return 0;
}