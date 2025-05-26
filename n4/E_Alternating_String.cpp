#include <bits/stdc++.h>
using namespace std;

// Function to determine the highest occurrence of a character in a map
int findMaxOccurrence(const unordered_map<char, int> &charFrequency)
{
    int maxOccurrence = 0;
    for (const auto &pair : charFrequency)
    {
        maxOccurrence = max(maxOccurrence, pair.second);
    }
    return maxOccurrence;
}

// Function to compute the minimum changes required for an even-length string
int processEvenLength(const string &str, int len)
{
    unordered_map<char, int> evenFreq, oddFreq;
    for (int idx = 0; idx < len; ++idx)
    {
        if (idx % 2 == 0)
        {
            evenFreq[str[idx]]++;
        }
        else
        {
            oddFreq[str[idx]]++;
        }
    }

    int maxEvenFreq = findMaxOccurrence(evenFreq);
    int maxOddFreq = findMaxOccurrence(oddFreq);

    return len / 2 - maxEvenFreq + len / 2 - maxOddFreq;
}

// Function to compute the minimum changes required for an odd-length string
int processOddLength(const string &str, int len)
{
    if (len == 1)
    {
        return 1;
    }

    int minChanges = INT_MAX;
    unordered_map<char, int> evenFreq, oddFreq;
    for (int idx = 0; idx < len - 1; ++idx)
    {
        if (idx % 2 == 0)
        {
            evenFreq[str[idx]]++;
        }
        else
        {
            oddFreq[str[idx]]++;
        }
    }

    unordered_map<char, int> futureEvenFreq, futureOddFreq;
    int maxEvenFreq = findMaxOccurrence(evenFreq);
    int maxOddFreq = findMaxOccurrence(oddFreq);

    minChanges = min(minChanges, len / 2 - maxEvenFreq + len / 2 - maxOddFreq);

    for (int idx = len - 2; idx >= 0; --idx)
    {
        if (idx % 2 == 0)
        {
            evenFreq[str[idx]]--;
            futureEvenFreq[str[idx + 1]]++;
        }
        else
        {
            oddFreq[str[idx]]--;
            futureOddFreq[str[idx + 1]]++;
        }

        unordered_map<char, int> mergedEvenFreq = evenFreq;
        for (const auto &entry : futureEvenFreq)
        {
            mergedEvenFreq[entry.first] += entry.second;
        }

        unordered_map<char, int> mergedOddFreq = oddFreq;
        for (const auto &entry : futureOddFreq)
        {
            mergedOddFreq[entry.first] += entry.second;
        }

        int maxMergedEvenFreq = findMaxOccurrence(mergedEvenFreq);
        int maxMergedOddFreq = findMaxOccurrence(mergedOddFreq);

        minChanges = min(minChanges, len / 2 - maxMergedEvenFreq + len / 2 - maxMergedOddFreq);
    }

    return (len < 2) ? minChanges + 2 : minChanges + 1;
}

int main()
{
    int numTests;
    cin >> numTests;
    while (numTests--)
    {
        int strLength;
        cin >> strLength;
        string input;
        cin >> input;

        if (strLength % 2 == 0)
        {
            cout << processEvenLength(input, strLength) << endl;
        }
        else
        {
            cout << processOddLength(input, strLength) << endl;
        }
    }
    return 0;
}
