#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //  * Soltuion Goes Here
    sort(arr.begin(), arr.end());
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        while (j >= 0 && arr[i] > arr[j] && arr[j] + k >= arr[i] && arr[j] != -1)
        {
            arr[j] = -1;
            j--;
        }
    }
    int ans = n;
    int sz = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -1)
        {
            sz++;
        }
    }
    cout << min(sz, ans) << endl;
    return 0;
}

/*
 * ith bacteria can swallow jth if (ai > aj) & ai <= aj + k;
 * after Swallow jth bacteria gets disappeared ..
 */