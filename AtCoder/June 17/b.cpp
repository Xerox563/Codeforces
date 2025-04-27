#include <bits/stdc++.h>
using namespace std;

void Solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans;
    int endTime = arr[0] + x;
    ans.push_back(endTime);
    for (int i = 1; i < n; i++)
    {

        if (endTime >= arr[i])
        {
            endTime += x;
            ans.push_back(endTime);
        }
        else
        {
            endTime = arr[i] + x;
            ans.push_back(endTime);
        }
    }

    for (auto x : ans)
    {
        cout << x << endl;
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long tc;
    // cin >> t;
    tc = 1;

    while (tc--)
    {
        Solve();
    }
    return 0;
}
