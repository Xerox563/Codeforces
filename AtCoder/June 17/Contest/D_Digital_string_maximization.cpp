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

void process_test_case()
{
    string number_str;
    input(number_str);

    vector<int> digits(number_str.size());
    for (int i = 0; i < number_str.size(); i++)
    {
        digits[i] = number_str[i] - '0';
    }

    for (int i = 1; i < digits.size(); i++)
    {
        while (i >= 1 && digits[i] > digits[i - 1] + 1 && digits[i] > 0)
        {
            swap(digits[i], digits[i - 1]);
            digits[i - 1]--;

            if (i > 1)
                i--;
            else
                break;
        }
    }

    string result = "";
    for (int digit : digits)
    {
        result += to_string(digit);
    }

    output(result);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test_cases;
    input(test_cases);
    while (test_cases--)
        process_test_case();

    return 0;
}

// By Xerox