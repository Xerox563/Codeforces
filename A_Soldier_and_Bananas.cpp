#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cost, initial, n;
    cin >> cost >> initial >> n;
    int temp_cost = 0;
    for (int i = 1; i <= n; i++)
    {
        temp_cost += cost * i;
    }
    cout << temp_cost - initial;
    return 0;
}
