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
        string a;
        read(a);
        string b;
        read(b);
        int n = a.length();
        //  ------------- Logic ----------------
        if (a == b)
        {
            cout << "YES" << endl;
            continue;
        }
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if ((a[i] == '0' && b[i] == '0') && (a[i + 1] == '1' && b[i + 1] == '1'))
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        // Approach -> keeping track of matching indices ..
        // set<int> zero_ind, one_ind;
        // int nonMatch = 0;
        // int cnt_a = 0;
        // int cnt_b = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] == '1')
        //     {
        //         cnt_a++;
        //     }
        //     else if (b[i] == '1')
        //     {
        //         cnt_b++;
        //     }
        // }
        // if (cnt_a > cnt_b)
        // {
        //     for (int i = n - 1; i >= 0; i--)
        //     {
        //         if (a[i] == b[i] && nonMatch == 0)
        //         {
        //             // matching
        //             if (a[i] == 0)
        //             {
        //                 zero_ind.insert(i);
        //             }
        //             else
        //             {
        //                 one_ind.insert(i);
        //             }
        //         }
        //         else if (a[i] != b[i])
        //         {
        //             // not matching
        //             nonMatch++;
        //         }
        //         else if (a[i] == b[i] && nonMatch != 0)
        //         {
        //             if (a[i] == '0')
        //             {
        //                 if (!a.empty())
        //                 {
        //                     // convert elements from this i to *a.begin() to '0'
        //                 }
        //                 else
        //                 {
        //                     continue;
        //                 }
        //             }
        //             else if (a[i] == '1')
        //             {
        //                 if (!b.empty())
        //                 {
        //                     // convert elements from this i to *b.begin() to '0'
        //                 }
        //                 else
        //                 {
        //                     continue;
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         for (int i = n - 1; i >= 0; i--)
        //         {
        //             if (a[i] == b[i] && nonMatch == 0)
        //             {
        //                 // matching
        //                 if (a[i] == 0)
        //                 {
        //                     zero_ind.insert(i);
        //                 }
        //                 else
        //                 {
        //                     one_ind.insert(i);
        //                 }
        //             }
        //             else if (a[i] != b[i])
        //             {
        //                 // not matching
        //                 nonMatch++;
        //             }
        //             else if (a[i] == b[i] && nonMatch != 0)
        //             {
        //                 if (a[i] == '0')
        //                 {
        //                     if (!a.empty())
        //                     {
        //                         // convert elements from this i to *a.begin() to '0'
        //                     }
        //                     else
        //                     {
        //                         continue;
        //                     }
        //                 }
        //                 else if (a[i] == '1')
        //                 {
        //                     if (!b.empty())
        //                     {
        //                         // convert elements from this i to *b.begin() to '0'
        //                     }
        //                     else
        //                     {
        //                         continue;
        //                     }
        //                 }
        //             }
        //         }
    }

    return 0;
}
