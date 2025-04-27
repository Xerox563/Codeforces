#include <bits/stdc++.h>
using namespace std;
int solve(int x, int y)
{

    const int rows = 5;
    const int cols = 3;
    const int cells = rows * cols;
    const int twos = 4;

    int maxi = (rows / 2) * (cols / 2);
    int s = (y + maxi - 1) / maxi;
    int u = y * twos;

    int re = s * cells - u;
    int ru = x - re;
    int s1 = (ru > 0) ? (ru + cells - 1) / cells : 0;

    return s + s1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int r, c;
        cin >> r >> c;
        cout << solve(r, c) << endl;
    }

    return 0;
}