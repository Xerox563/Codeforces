#include <bits/stdc++.h>
using namespace std;
void solve(string s, int n)
{
    string str1 = "";
    string str2 = "";
    char last = s.back();
    s.pop_back();
    char s_last = s.back();
    s.pop_back();
    str2 += s_last;
    str2 += last;
    //  cout << s << endl;
    cout << str2 << endl;

    if (s.find(str2) != string::npos)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(s, n);
    }
    return 0;
}
