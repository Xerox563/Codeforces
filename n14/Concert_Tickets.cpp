#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// unordered_map<int, int> mp;

// int solve(vector<int> &t_price, int target)
// {
//     int s = 0;
//     int e = t_price.size() - 1;
//     int ans = -1;
//     while (s <= e)
//     {
//         long long mid = s + (e - s) / 2;
//         if (t_price[mid] <= target )
//         {
//             return t_price[mid];
//         }
//         else if (t_price[mid] < target)
//         {
//             ans = t_price[mid];
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//     }
//     if (mp.count(ans))
//     {
//         mp[ans]--;
//         if (mp[ans] == 0)
//         {
//             mp.erase(ans);
//         }
//         return ans;
//     }
//     else
//     {
//         return -1;
//     }
// }

// int main()
// {
//     long long n, m;
//     cin >> n >> m;

//     vector<int> t_price(n);
//     vector<int> mp_person(m);

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         mp[x]++;
//         t_price[i] = x;
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> mp_person[i];
//     }

//     //* Solution Goes Here
//     vector<int> ans(m);
//     sort(t_price.begin(), t_price.end()); // Sort the ticket prices

//     for (int i = 0; i < m; i++)
//     {
//         ans[i] = solve(t_price, mp_person[i]);
//         if (ans[i] != -1)
//         {
//             mp[ans[i]]--;
//             if (mp[ans[i]] == 0)
//             {
//                 mp.erase(ans[i]);
//             }
//         }
//     }

//     // * Printing
//     for (int x : ans)
//     {
//         cout << x << endl;
//     }

//     return 0;
// }

int solve()
{
    ll n, m;
    cin >> n >> m;
    multiset<ll> price_of_ticket;
    for (ll i = 0; i < n; i++)
    {
        ll price;
        cin >> price;
        price_of_ticket.insert(price);
    }
    for (ll i = 0; i < m; i++)
    {
        ll price_paid_by_customer;
        cin >> price_paid_by_customer;

        auto it = price_of_ticket.upper_bound(price_paid_by_customer);
        if (it == price_of_ticket.begin())
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            cout << *(--it) << endl;
            price_of_ticket.erase(it);
        }
    }
    return 0;
}
int main()
{
    int testCase = 1;
    while (testCase--)
    {
        solve();
    }
    return 0;
}