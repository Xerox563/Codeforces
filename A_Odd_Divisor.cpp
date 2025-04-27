#include <bits/stdc++.h>
using namespace std;
bool isPowerTwo(long long n) {
    if(n == 0) {
        return false;
    } else {
        return (ceil(log2(n)) == floor(log2(n)));
    }
}
bool check(long long n)
{
    if (n % 2 == 1)
    {
        return true;
    }
    if(n <= 2 || isPowerTwo(n)) {
        return false;
    }
    else {
        return true;
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