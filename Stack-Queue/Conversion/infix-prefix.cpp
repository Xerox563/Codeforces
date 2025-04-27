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
string infixToPrefix(string s)
{
    /* step -1 */

    reverse(s.begin(), s.end());
    /* Step-2 */

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
            if (s[i] == '^')
            {
                while (!st.empty() && priority(s[i]) <= priority(st.top()))
                {
                    ans += st.top();
                    st.pop();
                }
            }
            else
            {
                while (!st.empty() && priority(s[i]) < priority(st.top()))
                {
                    ans += st.top();
                    st.pop();
                }
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
    /* Step - 3 */

    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    string str;
    cin >> str;
    cout << "result -> " << infixToPrefix(str) << endl;

    return 0;
}