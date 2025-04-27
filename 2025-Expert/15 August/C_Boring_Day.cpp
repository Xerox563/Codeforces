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

        // Solution Part
        unordered_set<int> st;
        for (auto it : arr)
        {
            st.insert(it);
        }
        int mini = arr[0];
        int maxi = arr[n - 1];
        int need = (mini + maxi) / 2;
        if (st.find(need) == st.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}