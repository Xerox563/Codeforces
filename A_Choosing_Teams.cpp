#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> arr, int n, int k)
{
    int cnt = 0;
    int temp = 5-k;
    for(auto x: arr) {
        if(x <= temp) {
            cnt++;
            
        }
    }
    if(cnt < 3) {
        return 0;
    }else {
        return cnt/3;
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << solve(arr, n, k);
    return 0;
}