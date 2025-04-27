#include <bits/stdc++.h>
using namespace std;

string solve(string s)
{
    stack<string> st;
    int i = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            st.push(string(1, s[i]));
        }
        else
        {
            string first = st.top();
            st.pop();
            string second = st.top();
            st.pop();
            string temp = "(" + second + s[i] + first + ")";
            st.push(temp);
        }
    }
    return st.top();
}

int main()
{
    string str;
    cin >> str;
    cout << "result -> " << solve(str) << endl;

    return 0;
}
