#include <bits/stdc++.h>
using namespace std;

// Custom comparator function
bool customComparator(const pair<string, int> &a, const pair<string, int> &b)
{
    const string &str1 = a.first;
    const string &str2 = b.first;

    int m = str1.length();
    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        { // Odd index (0-based index i is even)
            if (str1[i] < str2[i])
                return true;
            if (str1[i] > str2[i])
                return false;
        }
        else
        { // Even index (0-based index i is odd)
            if (str1[i] > str2[i])
                return true;
            if (str1[i] < str2[i])
                return false;
        }
    }
    return a.second < b.second; // If all characters are equal, maintain original order
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<string, int>> books(n);

    // Reading the input strings along with their original indices
    for (int i = 0; i < n; i++)
    {
        cin >> books[i].first;
        books[i].second = i + 1; // Store original 1-based index
    }

    // Sort using the custom comparator
    sort(books.begin(), books.end(), customComparator);

    // Output the original indices of the sorted strings
    for (const auto &book : books)
    {
        cout << book.second << " ";
    }
    cout << endl;

    return 0;
}
