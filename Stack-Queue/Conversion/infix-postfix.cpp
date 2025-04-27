#include <bits/stdc++.h>
using namespace std;
// Priority Check
int priority(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '-' || ch == '+')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
/* Function for Conversion */
string infixToPostfix(string s)
{
    stack<char> st;
    string ans = "";
    int i = 0;

    while (i < s.length())
    {
        // Check for operand
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            ans += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else /* Check for Operator */
        {
            while (!st.empty() && priority(s[i]) <= priority(st.top()))
            {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }

    // Left over elements of the stack
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    return ans;
}
int main()
{
    string str;
    cin >> str;
    cout << "result -> " << infixToPostfix(str) << endl;

    return 0;
}