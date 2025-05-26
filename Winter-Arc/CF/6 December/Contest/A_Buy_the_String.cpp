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
        int n, c0, c1, h;
        read(n);
        read(c0);
        read(c1);
        read(h);
        string str;
        read(str);
        int zeroes = 0, ones = 0;
        for (auto &ch : str)
        {
            if (ch == '0')
            {
                zeroes++;
            }
            else
            {
                ones++;
            }
        }
        if (c0 > c1)
        {
            ll ans = 0;
            ans += ones * c1;
            ll zeroes_cost = c0 * zeroes;
            ll temp = zeroes * h + zeroes * c1;
            if (zeroes_cost < temp)
            {
                ans += zeroes_cost;
            }
            else
            {
                ans += temp;
            }
            cout << ans << endl;
        }
        else if (c1 >= c0)
        {
            ll ans = 0;
            ans += zeroes * c0;
            ll ones_cost = c1 * ones;
            ll temp = ones * h + ones * c0; // convert to zero
            if (ones_cost < temp)
            {
                ans += ones_cost;
            }
            else
            {
                ans += temp;
            }
            cout << ans << endl;
        }
    }

    return 0;
}

//  By Xerox
