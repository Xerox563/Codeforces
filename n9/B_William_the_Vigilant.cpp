#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string a;
    cin >> a;

    int num = 0;

    // Count initial occurrences of "abc"
    for (int i = 0; i <= n - 3; i++)
    {
        if (a.substr(i, 3) == "abc")
        {
            num++;
        }
    }

    // Process the updates
    for (int i = 0; i < m; i++)
    {
        int index;
        char ch;
        cin >> index >> ch;
        index--; // Convert to 0-based index

        // Remove occurrences of "abc" affected by the update
        for (int j = max(0, index - 2); j <= min(n - 3, index); j++)
        {
            if (a.substr(j, 3) == "abc")
            {
                num--;
            }
        }

        // Update the character
        a[index] = ch;

        // Add occurrences of "abc" affected by the update
        for (int j = max(0, index - 2); j <= min(n - 3, index); j++)
        {
            if (a.substr(j, 3) == "abc")
            {
                num++;
            }
        }

        // Output the current number of "abc" substrings
        cout << num << endl;
    }
}

int main()
{
    solve();
    return 0;
}
