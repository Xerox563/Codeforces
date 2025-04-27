#include <bits/stdc++.h>
using namespace std;
void solve(int a, int b, int c)
{
    if (a + b >= 10 || a + c >= 10 || c + b >= 10)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second > b.second);
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // vector<pair<int, int>> p;
        // while (n--)
        // {
        //     int a, b;
        //     cin >> a >> b;
        //     p.push_back({a, b});
        // }
        //  vector<pair<int, int>> temp = p;
        // sort(p.begin(), p.end(), sortbysec);

        // int cnt = 0;
        // int ans = 0;
        // for (auto x : p)
        // {
        //     if (x.first < 10)
        //     {
        //         ans = x.first;
        //         break;
        //     }
        // }
        // int final_ans = 0;
        // for(int i=1;i<=n;i++) {
        //     if(temp[i].first == ans) {
        //         final_ans = i;
        //         break;
        //     }
        // }
        // cout << final_ans << endl;
        long long currWinner = 0;
        int pos = 0;
        for (int i = 0; i < n; i++)
        {
            long long m, q;
            cin >> m >> q;
            if (m <= 10)
            {
                if (q > currWinner)
                {
                    currWinner = q;
                    pos = i + 1;
                }
            }
        }
        cout<<pos<<endl;
    }
    return 0;
}