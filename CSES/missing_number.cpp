#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }
    // Solution goes....
    long long miss = -1;
    sort(v.begin(), v.end());
    for (long long i = 1; i < n; i++)
    {
        if (v[i] - v[i - 1] == 1)
        {
            continue;
        }
        else
        {
            miss = v[i - 1] + 1;
            break;
        }
    }
    if (miss == -1)
    {
        cout << v[n - 1] + 1 << endl;
    }
    else
    {

        cout << miss << endl;
    }

    return 0;
}