#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        string str;
        cin >> n >> str;

        // Solution Goes Here
        stack<int> st;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {

            if (str[i] == '(')
            {
                st.push(str[i]);
            }
            else if (str[i] == ')' && !st.empty() && st.top() == '(')
            {
                cnt += 2;
                st.pop();
            }
            else
            {
                st.push(str[i]);
            }
        }

        int ans = 0;
        ans += st.size() / 2;
        cout << ans << endl;
    }
    return 0;
}