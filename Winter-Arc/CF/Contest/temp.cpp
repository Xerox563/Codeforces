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

template <typename T>
T sum(const vector<T> &v) { return accumulate(v.begin(), v.end(), T(0)); }

template <typename T>
T product(const vector<T> &v)
{
    return accumulate(v.begin(), v.end(), T(1), std::multiplies<T>());
}

template <typename T>
T find_max(const vector<T> &v) { return *max_element(v.begin(), v.end()); }

template <typename T>
T find_min(const vector<T> &v) { return *min_element(v.begin(), v.end()); }

template <typename T>
T square_root(T x) { return sqrt(x); }

template <typename T>
bool are_all_elements_equal(const vector<T> &arr)
{
    return all_of(arr.begin() + 1, arr.end(), [&](const T &x)
                  { return x == arr[0]; });
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    read(t);
    while (t--)
    {
        int n, m;
        read(n);
        read(m);
        vector<string> v(n);
        read(v);

        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            int len = v[i].size();
            if (m >= len)
            {
                cnt++;
                m -= len;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
