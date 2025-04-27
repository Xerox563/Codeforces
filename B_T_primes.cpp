#include <bits/stdc++.h>
using namespace std;
/*  int cnt_divisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
    return cnt;
}*/
int cnt_divisors(int n)
{

    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i != n / i)
            {
                cnt = cnt + 2;
            }
            else
            {
                cnt = cnt + 1;
            }
        }
    }

    return cnt;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (cnt_divisors(n) == 3)
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