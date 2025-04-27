#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    string str;
    cin >> str;
    unordered_set<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        st.insert(str[i]);
    }
    // if not k-string....
    if (st.size() != k)
    {
        cout << "-1" << endl;
    }
    else
    {
        string ans = "";
        sort(str.begin(), str.end());
        for (int i = 0; i < str.length(); i += k)
        {
            ans += str[i];
        }
        string final = "";
        for (int i = 0; i < k; i++)
        {
            final += ans;
        }
        cout << final << endl;
    }

    // if k-string....

    return 0;
}