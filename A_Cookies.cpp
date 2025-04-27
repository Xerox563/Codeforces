#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long ways = 0;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ((sum - arr[i]) % 2 == 0)
        {
            ways++;
        }
    }
    cout << ways;

    return 0;
}