#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr, int enemy_no, int chef_str)
{
    sort(arr.begin(), arr.end(), greater<int>());
    int ans = 0;
    for (int i = 0; i < enemy_no; i++)
    {
        if (chef_str > arr[i])
        {
            chef_str -= arr[i];
        }
        else
        {
            ans = arr[i];
            break;
        }
    }
    cout << ans << endl;
}
int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int enemy_no, chef_str;
        cin >> enemy_no >> chef_str;
        vector<int> arr(enemy_no);
        for (int i = 0; i < enemy_no; i++)
        {
            cin >> arr[i];
        }
        solve(arr, enemy_no, chef_str);
    }
    return 0;
}
