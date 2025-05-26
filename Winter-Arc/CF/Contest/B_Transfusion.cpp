#include <bits/stdc++.h>
using namespace std;
#define ll long long

template <typename T>
void read(T &x) { cin >> x; }

template <typename T>
void read(vector<T> &v)
{
    for (auto &element : v)
    {
        cin >> element;
    }
}

template <typename T>
void print(const T &x) { cout << x << "\n"; }

template <typename T>
T sum_vector(const vector<T> &v) { return accumulate(v.begin(), v.end(), T(0)); }

void process_case()
{
    int length;
    read(length);
    vector<ll> numbers(length);
    read(numbers);

    ll sum_even_index = 0, sum_odd_index = 0;

    for (int idx = 0; idx < length; idx++)
    {
        if (idx % 2 == 0)
            sum_even_index += numbers[idx];
        else
            sum_odd_index += numbers[idx];
    }

    ll total_sum = sum_even_index + sum_odd_index;
    if (total_sum % length != 0)
    {
        print("NO");
        return;
    }

    ll target_value = total_sum / length;
    ll expected_even_sum = target_value * ((length + 1) / 2);
    ll expected_odd_sum = target_value * (length / 2);

    if (sum_even_index == expected_even_sum && sum_odd_index == expected_odd_sum)
        print("YES");
    else
        print("NO");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases;
    read(test_cases);
    while (test_cases--)
    {
        process_case();
    }

    return 0;
}

// By Xerox