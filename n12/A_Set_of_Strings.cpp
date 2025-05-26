#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;

    string q;
    cin >> q;

    unordered_set<char> st;
    vector<string> ans;
    string t = "";

    st.insert(q[0]);
    t += q[0];

    for (int i = 1; i < q.size(); i++)
    {
        if (st.find(q[i]) == st.end())
        {
            ans.push_back(t);
            t = "";
            t += q[i];
            st.insert(q[i]);
        }
        else
        {
            t += q[i];
        }
    }

    if (!t.empty())
    {
        ans.push_back(t);
    }

    if (ans.size() >= k)
    {
        cout << "YES" << endl;
        for (int i = 0; i < k - 1; i++)
        {
            cout << ans[i] << endl;
        }

        string remaining = "";
        for (int i = k - 1; i < ans.size(); i++)
        {
            remaining += ans[i];
        }
        cout << remaining << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
