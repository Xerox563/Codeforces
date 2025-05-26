#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     long long tc;
//     cin >> tc;
//     while (tc--)
//     {
//         string str;
//         cin >> str;

//         // Solution starts here
//         // if (is_sorted(str.begin(), str.end()))
//         // {
//         //     cout << "0" << endl;
//         //     continue;
//         // }
//         // int j = 0;
//         //  string ans = "";
//         // string temp = " ";
//         // while (j < str.length() && str[j] == '0')
//         // {
//         //     temp += '0';
//         //     j++;
//         //     continue;
//         // }

//         // long long ans = 0;
//         // for (int i = j; i < str.length(); i++)
//         // {
//         //     i initially points to the first '1' of the string
//         //     int ones = 0;
//         //     int k = i;
//         //     while (str[k] == '1')
//         //     {
//         //         ones++;
//         //         k++;
//         //     }
//         //     ans += k - i + 1;
//         //     temp += '0';
//         //     while (ones)
//         //     {
//         //         temp += '1';
//         //     }
//         // }

//         int j = 0;
//         int ones = 0, zeroes = 0;
//         int ans = 0;
//         int k = 0;

//         // Skip initial zeros
//         // while (k < str.length() && str[k] == '0')
//         // {
//         //     k++;
//         // }

//         // j = k;

//         for (int j = 0; j < str.length(); j++)
//         {
//             // while (j < str.length() && str[j] == '1')
//             // {
//             //     ones++;
//             //     j++;
//             // }
//             // if (j < str.length() && str[j] == '0')
//             // {
//             //     ans += (ones + 1);
//             //     j++;
//             // }
//             if (str[j] == '1')
//             {
//                 ones++;
//             }
//             else if (str[j] == '0' && ones == 0)
//             {
//                 continue;
//                 // if (ones > 0)
//                 // {
//                 //     ans += (ones + 1);
//                 // }
//                 // else
//                 // {
//                 //     continue;
//                 // }
//             }
//             else
//             {
//                 ans += (ones + 1);
//             }
//             j++;
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

using ll = long long;

void asquare()
{
    string s;
    cin >> s;
    ll n = s.size();
    ll ans = 0;
    ll ones_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ones_count++;
        }
        else if (ones_count > 0 && s[i] == '0')
        {
            ans += (ones_count + 1);
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        asquare();
    }
    return 0;
}
