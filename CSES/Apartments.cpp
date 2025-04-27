#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // desired
    }
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i]; // apartsize
    }
    // unordered_map<int, int> mp;
    // for (int i = 0; i < m; i++)
    // {
    //     mp[Apartsize[i]]++;
    // }
    // int cnt = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int lower = desired[i] - k;
    //     int upper = desired[i] + k;
    //     for (int j = lower; j <= upper; j++)
    //     {
    //         if (mp.find(j) != mp.end())
    //         {
    //             cnt++;
    //         }
    //         mp.erase(j);

    //     }
    // }
    // cout << cnt << endl;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 0;
    int i = 0, j = 0;
    while(i < n && j< m) {
        if(abs(a[i] - b[j]) <= k) {
            ++i;
            ++j;
            ++ans;
        } else {
            if(a[i] - b[j] > k) {
                ++j;
            } else {
                ++i;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}