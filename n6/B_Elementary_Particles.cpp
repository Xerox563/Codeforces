#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

// Custom hash function for vectors
struct VectorHash
{
    template <typename T>
    std::size_t operator()(const std::vector<T> &vec) const
    {
        std::size_t seed = vec.size();
        for (const auto &elem : vec)
        {
            seed ^= std::hash<T>{}(elem) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        }
        return seed;
    }
};

// Custom equality function for vectors
struct VectorEqual
{
    template <typename T>
    bool operator()(const std::vector<T> &lhs, const std::vector<T> &rhs) const
    {
        return lhs == rhs;
    }
};

int maxHarmoniousLength(const vector<int> &a)
{
    int n = a.size();
    int maxLength = -1;

    // Hash map to store seen subsegments
    unordered_map<vector<int>, vector<int>, VectorHash, VectorEqual> seen;

    // Iterate through all possible lengths of subsegments
    for (int length = 1; length <= n; ++length)
    {
        seen.clear();

        for (int start = 0; start <= n - length; ++start)
        {
            vector<int> subsegment(length);
            for (int i = 0; i < length; ++i)
            {
                subsegment[i] = a[start + i];
            }

            if (seen.find(subsegment) != seen.end())
            {
                for (int prevIndex : seen[subsegment])
                {
                    if (prevIndex != start)
                    {
                        maxLength = max(maxLength, length);
                        break;
                    }
                }
            }

            seen[subsegment].push_back(start);
        }
    }

    return maxLength;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        cout << maxHarmoniousLength(a) << '\n';
    }

    return 0;
}
