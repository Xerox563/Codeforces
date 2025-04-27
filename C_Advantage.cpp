#include <bits/stdc++.h>
using namespace std;
void solve(int n, int *str, vector<int> &arr)
{
    for (int i = 0; i < n; i++)
    {
        int maxi = INT_MIN;
        int j;
        for (j = 0; j < n; j++)
        {
            if (str[j] > maxi && j != i)
            {
                maxi = str[j];
            }
        }
        cout << str[i] - maxi << " ";
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        int str[n];
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        vector<int> arr(n);
        solve(n, str, arr);
    }
    return 0;
}