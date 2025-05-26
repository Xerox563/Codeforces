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
        ll n;
        read(n);
        vector<int> arr(n);
        read(arr);

        // Step 1: Precompute left_max and right_max arrays
        vector<int> left_max(n, INT_MIN), right_max(n, INT_MIN);

        left_max[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            left_max[i] = max(left_max[i - 1], arr[i]);
        }

        right_max[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            right_max[i] = max(right_max[i + 1], arr[i]);
        }

        // Step 2: Check if any element is smaller than both its neighbors
        bool flag = true;
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] < left_max[i - 1] && arr[i] < right_max[i + 1])
            {
                flag = false;
                break;
            }
        }

        // Step 3: Output the result
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
