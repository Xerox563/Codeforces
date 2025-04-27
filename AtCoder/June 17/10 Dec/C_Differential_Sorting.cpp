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
        // Write Your Code Here
        int n;
        read(n);
        vector<int> arr(n);
        read(arr);

        // Solution Goes Here
        if (is_sorted(arr.begin(), arr.end()))
        {
            cout << "0" << endl;
        }
        else if (arr[n - 1] < arr[n - 2])
        {
            cout << "-1" << endl;
        }
        else if (abs(arr[n - 2] - arr[n - 1]) > 1e18)
        {
            cout << "-1" << endl;
        }
        else
        {
            arr[n - 3] = arr[n - 2] - arr[n - 1];
            if (arr[n - 3] <= arr[n - 2] && arr[n - 3] <= arr[n - 1] && arr[n - 2] <= arr[n - 1])
            {
                cout << n - 2 << endl;
                for (int i = 0; i < n - 2; i++)
                {
                    cout << i + 1 << " " << n - 1 << " " << n << endl;
                }
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }

    return 0;
}
