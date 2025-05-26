// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ll tc;
//     cin >> tc;
//     while (tc--)
//     {
//         ll n;
//         cin >> n;
//         vector<int> arr(n);
//         map<int, int> mp;
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             mp[x]++;
//             arr[i] = x;
//         }
//         // * Solution Goes Here
//         sort(arr.begin(), arr.end());

//         int prev = -1;
//         ll ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             // int x = arr[i];
//             // int j = i + 1;
//             // while (j < n && arr[j] == arr[j - 1])
//             // {
//             //     j++;
//             //     continue;
//             // }
//             if (mp.size() != 0)
//             {
//                 for (auto x : mp)
//                 {
//                     if (abs(x.first - prev) == 1)
//                     {
//                         x.second--;
//                         if (x.second == 0)
//                         {
//                             mp.erase(x.first);
//                         }
//                     }
//                     prev = x.first;
//                 }
//                 ans++;
//             }
//         }
//     }
//     return 0;
// }

// /*
//  * set -> no. of nested dolls in it + size of dolls
//  * size is a consecutive positive integer.
//  * Find the minimum possible number of sets ..
//  */
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // Your code logic goes here
    int a = 14;
    int b = 37;
    int mid = (a + b) / 2;
    int mid1 = (a + ((b - a) / 2));
    int mid2 = (a + b) >> 1;
    if (a & 1)
    {
        cout << "ODD" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    cout << mid2 << endl;
}

int main()
{

    long long t = 1;

    while (t--)
    {
        solve();
    }
    return 0;
}