#include <bits/stdc++.h>
using namespace std;
bool check(long long n)
{
    if (n < 4041)
    {
        return false;
    }
    if (n % 10 == 1 || n % 10 == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (check(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}