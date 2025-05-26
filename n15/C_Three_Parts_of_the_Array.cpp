#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    long long n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int s = 0;
    int e = n - 1;
    ll sum1 = arr[s];
    ll sum3 = arr[e];
    ll ans = 0;

    while (s < e)
    {
        if (sum1 == sum3)
        {
            ans = sum1; // Both sums are equal, update the result
            s++;
            e--;
            if (s < e)
            {
                sum1 += arr[s];
                sum3 += arr[e];
            }
        }
        else if (sum1 < sum3)
        {
            s++;
            sum1 += arr[s]; // Increment left sum
        }
        else
        {
            e--;
            sum3 += arr[e]; // Increment right sum
        }
    }

    cout << ans << endl;
}

int main()
{
    long long t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
