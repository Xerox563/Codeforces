#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll loops;
    cin >> loops;

    unordered_map<int, vector<int>> mp;
    // 0,1,2,3,4,5,6,7,8,9

    if (loops < 36)
    {
        cout << "-1" << endl;
    }

    else
    {
        // loops > 2
        string ans = "";
        if (loops % 2 == 1)
        {
            // odd loops
            ll twos = (loops - 1) / 2;
            for (int i = 0; i < twos; i++)
            {
                ans += '8';
            }
            ans += '6'; // append '6' at the end
        }
        else
        {
            // even loops
            for (int i = 0; i < loops / 2; i++)
            {
                ans += '8';
            }
        }
        cout << ans << endl;
        return 0;
    }
}
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long k;
//     cin >> k;

//     if (k > 36)
//     {
//         cout << "-1" << endl;
//     }
//     else
//     {
//         while (k > 0)
//         {
//             if (k >= 2)
//             {
//                 cout << "8";
//                 k -= 2;
//             }
//             else
//             {
//                 cout << "9";
//                 k -= 1;
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
