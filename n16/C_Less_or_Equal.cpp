#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    if (k == 0)
    {
        // * Check if we can return a value smaller than the smallest element
        if (arr[0] != 1)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    else
    {
        vector<int> st;
        for (int i = 0; i < k; i++)
        {
            st.push_back(arr[i]);
        }
        if (arr[k] == st.back())
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << st.back() << endl;
        }
    }

    return 0;
}
