#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        for (auto x : arr)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
