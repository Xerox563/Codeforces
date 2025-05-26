// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ll tc;
//     cin >> tc;
//     while (tc--)
//     {
//         ll cost, worth, a1, ak;
//         cin >> cost >> worth >> a1 >> ak;
//         if (a1 >= cost || ak >= cost)
//         {
//             cout << "0" << endl;
//             return 0;
//         }
//         ll need = 0;
//         if (cost % 3 == 0)
//         {
//             if (cost <= 3 * ak)
//             {
//                 cout << "0" << endl;
//                 return 0;
//             }
//             else
//             {
//                 cost -= 3 * ak;
//                 // now use a1
//                 if (cost <= a1)
//                 {
//                     cout << "0" << endl;
//                     return 0;
//                 }
//                 else
//                 {
//                     // Here we had to use fancy coins
//                     ll need = cost - a1;
//                     cout << need / 3 + need % 3 << endl;
//                 }
//             }
//         }
//         else
//         {
//             if (cost <= 3 * ak)
//             {
//                 cout << "0" << endl;
//                 return 0;
//             }
//             else
//             {
//                 cost -= 3 * ak;
//                 // now use a1
//                 if (cost <= a1)
//                 {
//                     cout << "0" << endl;
//                     return 0;
//                 }
//                 else
//                 {
//                     // Here we had to use fancy coins
//                     ll need = cost - a1;
//                     cout << need / 3 + need % 3 << endl;
//                 }
//             }
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int m, k, a1, ak;
        cin >> m >> k >> a1 >> ak;
        // function which calculates the number of fancy coins taken
        // if we take exactly x coins of value k
        auto f = [m, k, a1, ak](int x)
        {
            int taken_1 = m - k * x;
            return max(0, taken_1 - a1) + max(0, x - ak);
        };

        int lf = 0;
        int rg = m / k;
        while (rg - lf > 2)
        {
            int mid = (lf + rg) / 2;
            if (f(mid) < f(mid + 1))
                rg = mid + 1;
            else
                lf = mid;
        }
        int ans = 1e9;
        for (int i = lf; i <= rg; i++)
            ans = min(ans, f(i));
        cout << ans << endl;
    }
}