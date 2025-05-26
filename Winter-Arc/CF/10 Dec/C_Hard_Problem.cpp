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
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        // m -> no. of seats
        int f = 0;
        int s = 0;
        int left = 0;
        int ans = 0;
        if (a <= m)
        {
            left += (m - a);
            f += a;
        }
        else
        {
            f += m;
        }
        if (b <= m)
        {
            left += (m - b);
            s += b;
        }
        else
        {
            s += m;
        }
        ans += (f + s);

        if (left >= c)
        {
            // more space
            ans += c;
        }
        else
        {
            // less space
            ans += left;
        }
        cout << ans << endl;
    }

    return 0;
}
