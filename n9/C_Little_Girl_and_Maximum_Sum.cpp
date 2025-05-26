#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, q;
    cin >> n >> q;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    reverse(arr, arr + n);
    vector<long long> freq(n, 0);
    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        freq[l]++;
        if (r + 1 < n)
        {
            freq[r + 1]--;
        }
    }
    long long sum = 0;
    vector<pair<long long, long long>> v;
    for (int i = 0; i < n; i++)
    {
        sum += freq[i];
        freq[i] = sum;
        v.push_back({sum, i});
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    long long t[n];
    long long main_sum = 0;
    for (int i = 0; i < n; i++)
    {
        long long sum = v[i].first;
        long long index = v[i].second;
        t[index] = arr[i];
        main_sum += (arr[i] * sum);
    }
    cout << main_sum << endl;

    return 0;
}