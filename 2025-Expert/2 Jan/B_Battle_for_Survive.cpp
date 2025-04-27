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
        if (n < 2)
        {
            cout << "Invalid input, n must be at least 2" << endl;
            continue;
        }

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // Solution logic
        int temp = arr.back();
        arr.pop_back();
        int l = arr.back();
        arr.pop_back();

        for (int num : arr) // Sum remaining elements
        {
            l -= num;
        }

        cout << temp - l << endl;
    }
    return 0;
}
