#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int n)
{
    if (n < 3)
    {
        return 0;
    }
    int cnt = 0;
    for (int i = 0; i < n - 2; i++)
    {

        if ((arr[i] + arr[i + 2]) * 2 == arr[i + 1])
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << solve(arr, n);
}
