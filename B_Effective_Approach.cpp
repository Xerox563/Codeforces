#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    long long first = 0;
    long long second = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        mp[y] = i;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        first += mp[x] + 1;;
        second += n - mp[x];
    }

   cout<<first<<" "<<second<<endl;
    return 0;
}