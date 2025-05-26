#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;

        stack<char> st;

        for (char ch : str)
        {
            if (!st.empty() && ch == 'B')
            {
                // If the current character is 'B' and the top of the stack is either 'A' or 'B', pop the stack
                st.pop();
            }
            else
            {
                // Otherwise, push the current character onto the stack
                st.push(ch);
            }
        }

        // The length of the remaining characters in the stack is the answer
        cout << st.size() << endl;
    }
    return 0;
}
