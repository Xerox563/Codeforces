#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> card(n);
    for (int i = 0; i < n; i++)
    {
        cin >> card[i];
    }

    // Proceeding to the solution..
    int ans;
    int cnt_5 = count(card.begin(), card.end(), 5);
    int cnt_0 = count(card.begin(), card.end(), 0);
    if (cnt_0 == 0)
    {
        cout << "-1" << endl;
    }
    else if (cnt_5 < 9)
    {
        cout << "0" << endl;
    }
    else
    {
        // while (cnt_5 % 9 != 0)
        // {
        //     cnt_5 -= 1;
        // }
        // ans = cnt_5;
        cnt_5 -= cnt_5 % 9;
        for (int i = 0; i < cnt_5; i++)
        {
            cout << 5;
        }
        for (int i = 0; i < cnt_0; i++)
        {
            cout << 0;
        }
    }
    // for (int i = 0; i < cnt_5; i++)
    // {
    //     cout << "5";
    // }
    // cout << "0" << endl;

    // cout << ans.length() << endl;

    return 0;
}