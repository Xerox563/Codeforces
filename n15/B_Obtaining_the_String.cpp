#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    // * Solution Goes Here
    // First finding the length of the charcetrs that need no swap
    /* string temp = "";
     int k = 0;
     int first = -1;
     int last = -1;
     for (int i = 0; i < n; i++)
     {
         if (s[i] == t[i])
         {
             k++;
             continue;
         }
         else
         {
             first = i;
         }
     }

     for (int i = n - 1; i > first; i--)
     {
         if (s[i] == t[i])
         {
             k++;
             continue;
         }
         else
         {
             last = i;
         }
     }

      Now printing the k inetgers
     cout << n - k + 1 << endl;   */

    string sorted_s = s, sorted_t = t;
    sort(sorted_s.begin(), sorted_s.end());
    sort(sorted_t.begin(), sorted_t.end());

    if (sorted_s != sorted_t)
    {
        cout << -1 << endl;
        return 0;
    }

    vector<int> moves;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            int j = i;
            while (s[j] != t[i])
            {
                j++;
            }

            while (j > i)
            {
                swap(s[j], s[j - 1]);
                moves.push_back(j);
                j--;
            }
        }
    }

    cout << moves.size() << endl;
    for (int move : moves)
    {
        cout << move << " ";
    }
    cout << endl;

    return 0;
}
/*
 * charcters of string  -> 1 to n;
 * moves are applied only to string s
 * we can swap s{i} & s{i+1}
 * We have 10^4 such moves and we had to find string(t) from string(s)
 */
