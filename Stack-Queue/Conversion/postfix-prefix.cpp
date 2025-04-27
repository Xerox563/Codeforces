#include <bits/stdc++.h>
using namespace std;

string solve(string s)
{
    int n = s.length();
    stack<string> st;
    
    for (int i = 0; i<n; i++)
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
            string temp = s[i] + second + first;
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
