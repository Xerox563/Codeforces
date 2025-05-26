// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef vector<ll> vl;
// typedef vector<int> vi;
// typedef vector<pair<ll, ll>> vpll;
// typedef vector<pair<int, int>> vpii;
// typedef pair<ll, ll> pll;

// template <typename T>
// void read(T &x) { cin >> x; }

// template <typename T>
// void read(vector<T> &v)
// {
//     for (auto &x : v)
//     {
//         cin >> x;
//     }
// }

// template <typename T>
// void print(const vector<T> &v)
// {
//     for (const auto &x : v)
//     {
//         cout << x << " ";
//     }
//     cout << "\n";
// }

// template <typename T>
// bool are_all_elements_equal(const vector<T> &arr)
// {
//     return all_of(arr.begin() + 1, arr.end(), [&](const T &x)
//                   { return x == arr[0]; });
// }

// const ll MOD = 1e9 + 7;

// ll Pow(ll a, ll b)
// {
//     a %= MOD;
//     ll ans = 1;
//     while (b)
//     {
//         if (b & 1)
//             ans = (ans * a) % MOD;
//         a = (a * a) % MOD;
//         b >>= 1;
//     }
//     return ans;
// }

// ll Mul(ll a, ll b)
// {
//     ll ans = 0;
//     while (b)
//     {
//         if (b & 1)
//             ans = (ans + a) % MOD;
//         a = (a + a) % MOD;
//         b >>= 1;
//     }
//     return ans;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     read(t);
//     while (t--)
//     {
//         ll n;
//         read(n);
//         vi arr(n);
//         read(arr);
//         long pos = 0, neg = 0;
//         for (long i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             if (x > 0)
//             {
//                 pos++;
//             }
//             else if (x < 0)
//             {
//                 neg++;
//             }
//         }

//         long moves = 0;

//         if (pos < neg)
//         {
//             moves = (neg - pos + 1) / 2; // Adjust negatives to balance
//             pos += moves;
//             neg -= moves;
//         }

//         if (neg % 2 != 0)
//         {
//             moves++; // Ensure negatives are even
//         }

//         cout << moves << "\n";
//         // int neg = 0, pos = 0;

//         // for (const auto &x : arr)
//         // {
//         //     if (x < 0)
//         //     {
//         //         neg++;
//         //     }
//         //     else if (x > 0)
//         //     {
//         //         pos++;
//         //     }
//         // }

//         // int ans = 0;

//         // if (neg > pos)
//         // {
//         //     // Make negatives less than or equal to positives
//         //     int cnt = 0;
//         //     while (neg > pos)
//         //     {
//         //         neg--;
//         //         pos++;
//         //         cnt++;
//         //     }
//         //     // Ensure the number of negatives is odd
//         //     if (neg % 2 == 0)
//         //     {
//         //         cnt++;
//         //     }
//         //     ans += cnt;
//         // }
//         // else if (neg == 0)
//         // {
//         //     // No negatives present, no adjustment needed
//         //     ans = 0;
//         // }
//         // else if (neg == pos)
//         // {
//         //     // If negatives and positives are equal
//         //     if (neg % 2 == 1)
//         //     {
//         //         ans += 1; // Adjust to make negatives even
//         //     }
//         // }
//         // else
//         // {
//         //     // Case: pos > neg
//         //     if (neg % 2 == 1)
//         //     {
//         //         ans += 1; // Adjust negatives to be even
//         //     }
//         // }

//         // cout << ans << "\n";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    long t;
    cin >> t;

    while (t--)
    {
        long n;
        cin >> n;

        long pos = 0, neg = 0;
        for (long i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > 0)
            {
                pos++;
            }
            else if (x < 0)
            {
                neg++;
            }
        }

        long moves = 0;

        if (pos < neg)
        {
            moves = (neg - pos + 1) / 2; // Adjust negatives to balance
            pos += moves;
            neg -= moves;
        }

        if (neg % 2 != 0)
        {
            moves++; // Ensure negatives are even
        }

        cout << moves << "\n";
    }

    return 0;
}
