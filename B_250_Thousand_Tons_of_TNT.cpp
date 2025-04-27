#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v1(n + 1, 0);
        vector<int> v2;
        for (int i = 1; i <= n; i++)
        {
            cin >> v1[i];
            v1[i] = v1[i - 1];
        }
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                v2.push_back(i);
                if (i != n / i)
                {
                    v2.push_back(n / i);
                }
            }
        }
        int answ = 0;
        for (int x : v2)
        {
            int  mini =INT_MAX;
            int  maxi = 0;
            for (int i = x; i <= n; i += x)
            {
                mini = min(mini, v1[i] - v1[i - x]);
                maxi = max(maxi, v1[i] - v1[i - x]);
            }
            answ = max(answ, maxi - mini);
        }
        cout << answ << endl;
    }
    return 0;
}