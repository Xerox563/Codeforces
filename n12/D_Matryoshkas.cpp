// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str;
//     int n;
//     cin >> n >> str;
//     string t;
//     cin >> t;

//     // Solution Goes Here
//     // int dist = 0;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     if (str[i] != t[i])
//     //     {
//     //         dist++;
//     //     }
//     // }

//     //  Task : To find the string p such that dist(s,p) = dist(s,t);
//     // string p = str;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     if (str[i] == p[i] && dist != 0)
//     //     {
//     //         p[i] = !str[i];
//     //         dist--;
//     //     }
//     // }

//     vector<char> p(n);
//     for (int i = 0; i < n; i++)
//     {
//         if (str[i] == t[i])
//         {
//             p[i] = str[i];
//         }
//         else
//         {
//             p[i] = '$';
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