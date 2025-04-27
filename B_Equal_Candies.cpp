#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> arr, int n)
{
    sort(arr.begin(),arr.end());
    int sum = 0;
    for(int i=1;i<n;i++) {
         sum+=arr[i]-arr[0];
    }
    cout<<sum<<endl;

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
        solve(arr,n);
    }
    return 0;
}