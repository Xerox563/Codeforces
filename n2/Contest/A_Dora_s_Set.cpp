#include <iostream>
using namespace std;

void solve()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int l, r;
        cin >> l >> r;

        // If l is even, make it odd
        if (l % 2 == 0)
        {
            l++;
        }

        // Calculate the maximum number of operations
        int maxOperations = (r - l + 2) / 4;
        cout << maxOperations << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
