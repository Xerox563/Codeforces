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
        string s1, s2, s3;
        get_input(s1);
        get_input(s2);
        get_input(s3);

        int len1 = s1.size(), len2 = s2.size();
        const int MAX_COST = 1e9;
        vector<vector<int>> cost_matrix(len1 + 1, vector<int>(len2 + 1, MAX_COST));
        cost_matrix[0][0] = 0;

        for (int i = 0; i <= len1; ++i)
        {
            for (int j = 0; j <= len2; ++j)
            {
                if (i == 0 && j == 0)
                    continue;
                int idx = i + j - 1;
                if (idx >= s3.size())
                    continue;

                if (i > 0)
                {
                    int temp_cost = cost_matrix[i - 1][j];
                    if (s1[i - 1] != s3[idx])
                        temp_cost++;
                    cost_matrix[i][j] = min(cost_matrix[i][j], temp_cost);
                }

                if (j > 0)
                {
                    int temp_cost = cost_matrix[i][j - 1];
                    if (s2[j - 1] != s3[idx])
                        temp_cost++;
                    cost_matrix[i][j] = min(cost_matrix[i][j], temp_cost);
                }
            }
        }

        show_result(cost_matrix[len1][len2]);
    }

    return 0;
}

// By Xerox