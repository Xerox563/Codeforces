#include <bits/stdc++.h>

using namespace std;

void findMinDifference()
{
    int itemCount, numX, numY;
    cin >> itemCount >> numX >> numY;

    int gcdResult = __gcd(numX, numY);

    vector<int> remainderValues(itemCount);

    for (int i = 0; i < itemCount; i++)
    {
        int value;
        cin >> value;
        remainderValues[i] = value % gcdResult;
    }

    sort(remainderValues.begin(), remainderValues.end());

    int minDifference = remainderValues.back() - remainderValues.front();

    for (int i = 0; i < itemCount - 1; i++)
    {
        minDifference = min(minDifference, remainderValues[i] + gcdResult - remainderValues[i + 1]);
    }

    cout << minDifference << '\n';
}

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        findMinDifference();
    }

    return 0;
}
