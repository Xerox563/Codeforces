#include <bits/stdc++.h>
using namespace std;

void find_digits(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    // recursive
    find_digits(n / 10);

    // Processing
    cout << n % 10 << " ";
}

int main()
{
    int n = 6473;
    if (n == 0)
    {
        cout << 0 << endl;
    }
    find_digits(n);
    // cout << cnt << endl;

    return 0;
}

/* special case :
  0647 -> 423   */