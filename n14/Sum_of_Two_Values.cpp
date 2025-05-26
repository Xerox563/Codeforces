#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }

    pair<int, int> p;
    p.first = -1;
    p.second = -1;

    for (int i = 0; i < n; i++)
    {
        if (mp.find(x - arr[i]) != mp.end())
        {
            p.first = i;
            p.second = mp[x - arr[i]];
            break;
        }
        else
        {
            mp[arr[i]] = i;
        }
    }

    if (p.first == -1 || p.second == -1)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        cout << p.second + 1 << " " << p.first + 1 << endl;
    }

    // sort(arr.begin(), arr.end());
    // int i = 0, j = 1;
    // while (j < n)
    // {
    //     if (arr[i] + arr[j] == x)
    //     {
    //         cout << i << " " << j << endl;
    //         break;
    //     }
    //     else if (arr[i] + arr[j] > x)
    //     {
    //         i++;
    //     }
    //     else
    //     {
    //         j++;
    //     }
    // }

    return 0;
}