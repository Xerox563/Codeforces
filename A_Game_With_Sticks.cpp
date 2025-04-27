#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int x = min(m, n);
    if (m == 1 || n == 1)
    {
        cout << "Akshat" << endl;
    }
    else
    {
        if (x % 2 == 0)
        {
            cout << "Malvika" << endl;
        }
        else
        {
            cout << "Akshat" << endl;
        }
    }
  
    return 0;
}