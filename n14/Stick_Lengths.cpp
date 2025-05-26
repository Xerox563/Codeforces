#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    
    // * Code Goes Here
    sort(arr.begin(), arr.end());
    int mid = n / 2;
    int ele = arr[mid];
    long long cost = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != ele)
        {
            cost += abs(ele - arr[i]);
        }
    }
    cout << cost << endl;
    return 0;
}