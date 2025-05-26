#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, wt;
    cin >> n >> wt;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // *  Solution Goes Here
    sort(arr.begin(), arr.end());
    int i = 0;
    int j = n - 1;
    long long ans = 0;
    while (i <= j)
    {
        if (arr[i] + arr[j] <= wt)
        {
            i++;
            j--;
            ans++;
        }
        else
        {
            j--;
            ans++;
        }
    }
    cout << ans << endl;
    // int allowed = 2;
    // sort(arr.begin(), arr.end(), greater<int>());
    // long long ans = 0;
    // long long sum = 0;
    // vector<int> v;
    // long long prev = 0;
    // for (auto x : arr)
    // {
    //     sum += x;
    //     prev = x;
    //     if (sum <= wt && allowed != 0)
    //     {
    //         allowed--;
    //     }
    //     else
    //     {
    //         if (prev == sum)
    //         {
    //             v.push_back(x);
    //         }
    //         allowed = 1;
    //         ans++;
    //         sum = x;
    //     }
    // }
    // if (sum <= wt)
    // {
    //     sort(v.begin(), v.end());
    //     if (sum + v[0] > wt)
    //     {
    //         ans++;
    //     }
    // }
    // cout << ans << endl;

    // // long long m = 0;
    // // long long need = 0;
    // // for (auto x : arr)
    // // {
    // //     if (allowed != 0)
    // //     {
    // //         if (x + need <= wt)
    // //         {
    // //             m += x;
    // //             need += (wt - x);
    // //         }
    // //         allowed--;
    // //     }
    // // }
    return 0;
}