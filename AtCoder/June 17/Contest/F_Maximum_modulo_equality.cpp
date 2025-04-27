#include <bits/stdc++.h>
using namespace std;
#define ll long long

template <typename T>
void get_input(T &v) { cin >> v; }

template <typename T>
void get_input(vector<T> &arr)
{
    for (auto &el : arr)
    {
        cin >> el;
    }
}

template <typename T>
void show_result(const T &v) { cout << v << "\n"; }

template <typename T>
void show_result(const vector<T> &arr)
{
    for (const auto &el : arr)
    {
        cout << el << " ";
    }
    cout << "\n";
}

template <typename T>
T calculate_sum(const vector<T> &arr)
{
    return accumulate(arr.begin(), arr.end(), T(0));
}

template <typename T>
T calculate_product(const vector<T> &arr)
{
    return accumulate(arr.begin(), arr.end(), T(1), multiplies<T>());
}

template <typename T>
T get_max(const vector<T> &arr)
{
    return *max_element(arr.begin(), arr.end());
}

template <typename T>
T get_min(const vector<T> &arr)
{
    return *min_element(arr.begin(), arr.end());
}

template <typename T>
T calc_sqrt(T x)
{
    return sqrt(x);
}

template <typename T>
bool all_equal(const vector<T> &arr)
{
    return all_of(arr.begin() + 1, arr.end(), [&](const T &val)
                  { return val == arr[0]; });
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    get_input(t);
    while (t--)
    {
        // Code Here
    }

    return 0;
}

// By Xerox