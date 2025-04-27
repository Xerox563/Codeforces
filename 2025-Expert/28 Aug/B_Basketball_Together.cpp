#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);

    long long n, D;
    cin >> n >> D;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.rbegin(), arr.rend());
    int players = 0;
    int i = 0;
    int wins = 0;
    while (i < n && players <= n)
    {
        int x = ceil((D + 1) / (arr[i] * 1.0));
        players += x;
        if (players <= n)
        {
            wins++;
        }
        i++;
        // n -= x-1;
    }

    // int s = 0;        // Start pointer
    // int e = n - 1;    // End pointer
    // int win = 0;      // Number of wins

    // while (s <= e) {
    //     // Start with the largest available book (or element)
    //     long long sum = arr[e];
    //     e--;

    //     // Try to pair it with smaller books to exceed D
    //     while (s <= e && sum <= D) {
    //         sum += arr[e];
    //         s++;
    //     }

    //     // If the sum exceeds D, count it as a win
    //     if (sum > D) {
    //         win++;
    //     }
    // }

    cout << wins << endl;
    return 0;
}
