#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> arr(n);

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1 || n == 2)
    { // Directly print for small arrays
        for (long long i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    if (arr[0] == n)
    { // If first element is the largest
        cout << arr[0] << " ";
        for (long long i = n - 1; i > 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    else if (arr[n - 1] == n)
    { // If last element is the largest
        for (long long i = n - 2; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << arr[n - 1] << "\n";
    }
    else
    {
        cout << "-1\n"; // No valid output case
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
