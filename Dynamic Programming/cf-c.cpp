#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0ll;
        int oddSum = 0;
        int evenSum = 0;
        int res;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            if (x % 2 == 1)
            {
                oddSum++;
            }
            else
            {
                evenSum++;
            }
            res = oddSum / 3;
            if (evenSum == 0 && oddSum == 0)
            {
                res = 0;
            }
            else if (oddSum % 3 == 1)
            {
                res = (oddSum + 2) / 3;
            }
            else
            {
                cout << sum - res << " ";
            }
        }
    }
    return 0;
}