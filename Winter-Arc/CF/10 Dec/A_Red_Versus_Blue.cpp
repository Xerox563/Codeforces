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
        int n, r, b;
        cin >> n >> r >> b;

        int base_r = r / (b + 1);  // Minimum Rs per region
        int extra_r = r % (b + 1); // Remaining Rs to distribute

        string result = "";
        for (int i = 0; i < b + 1; ++i)
        {
            result += string(base_r, 'R'); // Add base Rs
            if (extra_r > 0)
            {
                result += 'R'; // Distribute an extra R
                --extra_r;
            }
            if (i < b)
            {
                result += 'B'; // Add a B (except after the last region)
            }
        }

        cout << result << "\n";
    }

    return 0;
}
