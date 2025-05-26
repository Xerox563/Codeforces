#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Template to read a single value of any type
template <typename T>
void input(T &value)
{
    cin >> value;
}

// Template to read a vector of values
template <typename T>
void input_vector(vector<T> &vec)
{
    for (auto &elem : vec)
    {
        cin >> elem;
    }
}

// Template to output a single value
template <typename T>
void output(const T &value)
{
    cout << value << "\n";
}

// Template to output a vector of values
template <typename T>
void output_vector(const vector<T> &vec)
{
    for (const auto &elem : vec)
    {
        cout << elem << " ";
    }
    cout << "\n";
}

// Template to compute the sum of all elements in a vector
template <typename T>
T vector_sum(const vector<T> &vec)
{
    return accumulate(vec.begin(), vec.end(), T(0));
}

// Template to compute the product of all elements in a vector
template <typename T>
T vector_product(const vector<T> &vec)
{
    return accumulate(vec.begin(), vec.end(), T(1), std::multiplies<T>());
}

// Template to find the maximum value in a vector
template <typename T>
T vector_max(const vector<T> &vec)
{
    return *max_element(vec.begin(), vec.end());
}

// Template to find the minimum value in a vector
template <typename T>
T vector_min(const vector<T> &vec)
{
    return *min_element(vec.begin(), vec.end());
}

// Template to compute the square root of a value
template <typename T>
T calculate_square_root(T value)
{
    return sqrt(value);
}

// Template to check if all elements in a vector are equal
template <typename T>
bool are_elements_equal(const vector<T> &vec)
{
    return all_of(vec.begin() + 1, vec.end(), [&](const T &elem)
                  { return elem == vec[0]; });
}

int main()
{
    int t;
    input(t);

    while (t--)
    {
        string s;
        input(s);

        ll sum = 0;
        int c2 = 0, c3 = 0;

        for (char ch : s)
        {
            int d = ch - '0';
            sum += d;
            if (d == 2)
                c2++;
            if (d == 3)
                c3++;
        }

        ll rem = (9 - (sum % 9)) % 9;
        bool ok = false;

        for (int b = 0; b <= c3; b++)
        {
            ll tmp = (rem - 6LL * b) % 9;
            if (tmp < 0)
                tmp += 9;

            ll a = (tmp * 5) % 9;

            if (a <= c2)
            {
                ok = true;
                break;
            }
        }

        if (ok)
            output("YES");
        else
            output("NO");
    }

    return 0;
}

// by Xerox