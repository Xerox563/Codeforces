#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    while(q--)
    {
        int x, y;
        cin >> x >> y;
        vector<int> v(x);
        for (int i = 0; i < x; i++)
        {
            v.push_back(arr[i]);
        }
        reverse(v.begin(), v.end());
        int sum = 0;
        for (int i = 0; i < y; i++)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }
    return 0;
}