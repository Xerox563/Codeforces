#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cost = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < m; i++)
    {
        if (v[i] < 0)
        {
            cost += (-1)*v[i];
        }
    }
 
        cout << cost << endl;

    return 0;
}