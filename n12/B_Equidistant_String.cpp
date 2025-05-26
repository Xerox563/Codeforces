#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     string str;
//     int n;
//     cin >> n >> str;
//     string t;
//     cin >> t;

//     // Solution Goes Here
//     int dist = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (str[i] != t[i])
//         {
//             dist++;
//         }
//     }

//     // * Task : To find the string p such that dist(s,p) = dist(s,t);
//     string p = str;
//     for (int i = 0; i < n; i++)
//     {
//         if (str[i] == p[i] && dist != 0)
//         {
//             p[i] = !str[i];
//             dist--;
//         }
//     }
//     if (p != t)
//     {
//         cout << p << endl;
//     }
//     else
//     {
//         cout << "impossible" << endl;
//     }

//     return 0;
// }

int main()
{
    string s, t, p;
    cin >> s >> t;
    int c(0);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[i])
            p += s[i];
        else
        {
            c++;
            if (c % 2 == 1)
                p += s[i];
            else
                p += t[i];
        }
    }

    if (c % 2 == 1)
        cout << "impossible" << endl;
    else
        cout << p << endl;
    return 0;
}