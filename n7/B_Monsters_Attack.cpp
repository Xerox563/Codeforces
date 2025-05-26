#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> monster; //  {power,position};
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x;
            cin >> y;
            monster.push_back({x, y});
        }

        // Solution Goes here
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
  
            if (monster[i].first > k)
            {
                int to_move = monster[i].first / k;
                // int to_move = ceil(m);
                int pos = monster[i].second - to_move;
                if (pos == 0)
                {
                    flag = false;
                }
            }
        }
        if (flag == false)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}