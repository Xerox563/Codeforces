#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

class TC
{

    int N;
    vector<int> ice_spheres;

public:
    void solve()
    {

        cin >> N;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            ice_spheres.push_back(x);
        }

        sort(ice_spheres.begin(), ice_spheres.end());

        for (int i = 1; i < N - 1; i += 2)
        {
            swap(ice_spheres[i], ice_spheres[i - 1]);
        }

        int ans = 0;

        for (int i = 1; i < N - 1; i++)
        {
            if (ice_spheres[i] < ice_spheres[i - 1] && ice_spheres[i] < ice_spheres[i + 1])
                ++ans;
        }
        cout << ans << endl;
        for (auto x : ice_spheres)
            cout << x << " ";
        cout << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for (int i = 1; i <= testcases; i++)
    {
        TC tc;
        tc.solve();
    }

    return 0;
}