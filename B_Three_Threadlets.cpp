#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        vector<long long> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        long long mini = *min_element(v.begin(), v.end());
        long long maxi = *max_element(v.begin(), v.end());
        if (mini * 3 >= maxi)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}