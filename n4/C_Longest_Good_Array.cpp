#include <bits/stdc++.h>
using namespace std;

int maxLengthGoodArray(long long l, long long r)
{
    int maxLen = 0;
    long long currsum = 0;
    while (true)
    {
        if (currsum + (maxLen + 1) <= r - l)
        {
        }
        currsum += maxLen + 1;
        maxLen++;
    }
    else
    {
        break;
    }
    cout << maxLen + 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        //solution goes
        cout << maxLengthGoodArray(l, r) << endl;
    }
    return 0;
}
