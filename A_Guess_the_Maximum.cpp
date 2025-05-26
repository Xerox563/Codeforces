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

        // Solution
        vector<int> maxi;
        for (int i = 1; i < n; i++)
        {
            int x = max(arr[i], arr[i - 1]);
            maxi.push_back(x);
        }
        int mini = *min_element(maxi.begin(), maxi.end());
        cout << mini - 1 << endl;
    }
    return 0;
}