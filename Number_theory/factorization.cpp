#include <bits/stdc++.h>
using namespace std;
void check_Prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << endl;
            n /= i;
        }
    }
    // if any prime number is left then,
    if (n != 1)
    {
        cout << n << endl;
    }
}
int main()
{
    int n;

    cin >> n;
    cout << endl;
    check_Prime(n);
    return 0;
}