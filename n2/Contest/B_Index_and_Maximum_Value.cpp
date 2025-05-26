#include <bits/stdc++.h>
using namespace std;

void processTestCase()
{
    int arraySize, numQueries;
    cin >> arraySize >> numQueries;

    int maxValue = 0;
    for (int i = 0; i < arraySize; i++)
    {
        int value;
        cin >> value;
        maxValue = max(maxValue, value);
    }

    while (numQueries--)
    {
        char operation;
        int lowerBound, upperBound;
        cin >> operation >> lowerBound >> upperBound;

        if (lowerBound <= maxValue && maxValue <= upperBound)
        {
            if (operation == '-')
            {
                maxValue--;
            }
            else
            {
                maxValue++;
            }
        }

        cout << maxValue << " ";
    }

    cout << endl;
}

int main()
{
    long long testCases;
    cin >> testCases;

    while (testCases--)
    {
        processTestCase();
    }

    return 0;
}
