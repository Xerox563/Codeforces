#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<int> v(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // Solution goes....
    long long moves = 0;
    for (long long i = 1; i < n; i++)
    {
        if (v[i] >= v[i - 1])
        {
            continue;
        }
        else
        {
            /*while (v[i] < v[i - 1])
              {
                  v[i] = v[i] + 1;
                  moves++;
              }*/
            moves += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }
    cout << moves << endl;
    return 0;
}