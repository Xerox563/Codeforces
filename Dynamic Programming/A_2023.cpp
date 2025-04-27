#include <bits/stdc++.h>
using namespace std;

void calculate(int n, int k)
{

    long long prod = 1;
    for (int i = 0, m; i < n; ++i)
    {
        cin >> m;
        prod = prod * m;
    }
    if ((prod <= 2023) && ((2023 % prod) == 0))
    {
        cout << "YES" << endl;
        cout << (2023 / prod) << " ";
        for (int i = 0; i < k - 1; i++)
        {
            cout << "1 ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        calculate(n, k);
    }
}