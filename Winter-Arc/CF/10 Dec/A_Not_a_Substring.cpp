#include <bits/stdc++.h>
using namespace std;

#define ll long long

template <typename T>
void read(T &x) { cin >> x; }

template <typename T>
void read(vector<T> &v)
{
    for (auto &x : v)
    {
        cin >> x;
    }
}

template <typename T>
void print(const T &x) { cout << x << "\n"; }

template <typename T>
void print(const vector<T> &v)
{
    for (const auto &x : v)
    {
        cout << x << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    read(t);
    while (t--)
    {
        string s;
        read(s);
        int len = s.length();

        if (len == 1 || s == "()")
        {
            cout << "NO" << endl;
            continue;
        }

        // Generate ans1: "()()()..."
        string ans1 = "";
        for (int i = 0; i < len; i++)
        {
            ans1 += "()";
        }

        // Generate ans2: "((...))..."
        string ans2 = "";
        for (int i = 0; i < len; i++)
        {
            ans2 += '(';
        }
        for (int i = 0; i < len; i++)
        {
            ans2 += ')';
        }

        if (ans1.find(s) == string::npos)
        {
            cout << "YES" << endl;
            cout << ans1 << endl;
        }
        else if (ans2.find(s) == string::npos)
        {
            cout << "YES" << endl;
            cout << ans2 << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
