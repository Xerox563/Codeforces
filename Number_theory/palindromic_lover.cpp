#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string str)
{
    string temp = str;
    reverse(temp.begin(), temp.end());
    return (temp == str);
}
void solve1(string s1, string s2)
{
    bool flag = false;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s2.find(s1[i]) != -1)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
void solve(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();

    string ans1 = "";
    string ans2 = "";
    ans1 += s1[0];
    ans2 += s2[0];
    for (int i = 1; i < n; i++)
    {
        ans1 += s1[i];
        string temp = ans1 + ans2;
        if (isPalindrome(temp))
        {
            cout << "Yes" << endl;
            return;
        }
        else
        {
            ans2 += s2[i];
            string temp1 = ans1 + ans2;
            if (isPalindrome(temp1))
            {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        solve1(s1, s2);
    }
    return 0;
}