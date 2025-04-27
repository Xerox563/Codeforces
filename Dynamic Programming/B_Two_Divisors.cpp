#include <bits/stdc++.h>
using namespace std;
// long long calcGCD(long long x1, long long x2)
// {
//     while (x2 != 0)
//     {
//         long long x = x2;
//         x2 = x1 % x2;
//         x1 = x;
//     }
//     return x1;
// }
long long calcGCD(long long x1, long long x2)
{
    if (x2 == 0)
    {
        return x1;
    }
    else
    {
        return calcGCD(x2, x1 % x2);
    }
}
long long calcLCM(long long x, long long y)
{
    return (x / calcGCD(x, y)) * y;
}
void calculate(int a, int b)
{
    if (b % a == 0)
    {
        cout << (b / a) * b << endl;
    }
    else
    {
        cout << calcLCM(a, b) << endl;
    }
    // long long lcm = (a * b) / (__gcd(a, b));
    // if (lcm == b)
    // {
    //     cout << lcm * (b / a) << endl;
    // }
    // else
    // {
    //     cout << lcm << endl;
    // }
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        calculate(a, b);
    }
}