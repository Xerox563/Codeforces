#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    long long testCases;
    cin >> testCases;

    while (testCases--)
    {
        int size, limit;
        cin >> size >> limit;
        vector<int> elements(size);

        for (int i = 0; i < size; i++)
        {
            cin >> elements[i];
        }

        // Sort elements in descending order
        sort(elements.rbegin(), elements.rend());

        for (int i = 0; i < size; i++)
        {
            if (limit == 0 || i == size - 1)
            {
                break;
            }

            // Calculate difference and adjust elements within limit
            int difference = elements[i] - elements[i + 1];
            int adjustment = min(difference, limit);

            elements[i + 1] += adjustment;
            limit -= adjustment;
            i++;
        }

        int sumOddIndices = 0;
        int sumEvenIndices = 0;

        // Calculate sums for even and odd indexed elements
        for (int i = 0; i < size; i++)
        {
            if (i % 2 == 0)
            {
                sumEvenIndices += elements[i];
            }
            else
            {
                sumOddIndices += elements[i];
            }
        }

        cout << abs(sumOddIndices - sumEvenIndices) << endl;
    }

    return 0;
}
