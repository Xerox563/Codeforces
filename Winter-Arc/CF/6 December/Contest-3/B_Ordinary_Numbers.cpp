#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool findDigits(int num)
{
    vector<int> digits;
    while (num != 0)
    {
        int r = num % 10;
        digits.push_back(r);
        num /= 10;
    }

    vector<int> decimal;
    for (auto dig : digits)
    {
        int temp = dig;
        while (temp != 0)
        {
            int r = temp % 2;
            decimal.push_back(r);
            temp /= 2;
        }
        reverse(decimal.begin(), decimal.end());
    }

    // if its all decimal values of each digit is same then retuen true else false
    for (int i = 0; i < decimal.size() - 1; i++)
    {
        if (decimal[i] != decimal[i + 1])
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        // Solution Goes Here
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            // take out every digits
            if (findDigits(i))
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
