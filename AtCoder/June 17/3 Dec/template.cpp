#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Fast input for a single value
template <typename T>
void read(T &x)
{
    cin >> x;
}

// Input for an array or vector
template <typename T>
void read(vector<T> &v)
{
    for (auto &x : v)
    {
        cin >> x;
    }
}

// Output for a single value
template <typename T>
void print(const T &x)
{
    cout << x << "\n";
}

// Output for an array or vector
template <typename T>
void print(const vector<T> &v)
{
    for (const auto &x : v)
    {
        cout << x << " ";
    }
    cout << "\n";
}

// Computes the sum of an array
template <typename T>
T sum(const vector<T> &v)
{
    return accumulate(v.begin(), v.end(), T(0));
}

// Computes the product of an array
template <typename T>
T product(const vector<T> &v)
{
    return accumulate(v.begin(), v.end(), T(1), std::multiplies<T>());
}

// Finds the maximum element in an array
template <typename T>
T find_max(const vector<T> &v)
{
    return *max_element(v.begin(), v.end());
}

// Finds the minimum element in an array
template <typename T>
T find_min(const vector<T> &v)
{
    return *min_element(v.begin(), v.end());
}

// Computes the square root of a number
template <typename T>
T square_root(T x)
{
    return sqrt(x);
}

// Main logic of the solution
void solve()
{
    // * Code Here
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    read(t);

    while (t--)
    {
        solve();
    }

    return 0;
}
