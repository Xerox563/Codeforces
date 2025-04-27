#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int mini = v[0];
        int maxi = v[n-1];
        int mini_e = 0;
        int maxi_e = 0;
        for(int i=0;i<n;i++) {
            if(v[i] == mini) {
                mini_e++;
            } else if(v[i] == maxi) {
                maxi_e++;
            }
        }
        cout << 2*mini_e*maxi_e << endl;
    }
    return 0;
}