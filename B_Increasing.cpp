#include <bits/stdc++.h>
using namespace std;
bool solve(vector<int> arr, int n)
{
    if (n == 1)
    {
        return true;
    }

    set<int> st;
    for(int i=0;i<n;i++) {
        st.insert(arr[i]);
    }
    if(st.size() == n) {
        return true;
    } else {
        return false;
    }

}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (solve(arr, n))
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