#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
        if (n % 2)
        {
            for (int i = 1; i <= n-2; i++)
            {
                cout << i << " ";
            }
            cout<<n<<" "<<n-1;
        } else {
             for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
        }
    return 0;
}

