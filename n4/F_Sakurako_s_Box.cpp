#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

// Function to perform modular addition
long long modAdd(long long a, long long b)
{
    return (MOD + (a % MOD) + (b % MOD)) % MOD;
}

// Function to perform modular multiplication
long long modMul(long long a, long long b)
{
    return ((a % MOD) * (b % MOD)) % MOD;
}

// Function to calculate power using binary exponentiation
long long modPow(long long base, long long exp)
{
    if (exp == 0)
        return 1LL;
    long long halfPow = modPow(base, exp / 2);
    halfPow = modMul(halfPow, halfPow);
    if (exp % 2 == 1)
    {
        return modMul(halfPow, base);
    }
    return halfPow;
}

// Function to calculate modular inverse
long long modInverse(long long value)
{
    return modPow(value, MOD - 2);
}

// Function to compute the expected value based on multiple test cases
vector<long long> computeExpectedValue(int testCount, const vector<pair<int, vector<long long>>> &testCases)
{
    vector<long long> results;

    for (const auto &testCase : testCases)
    {
        int size = testCase.first;
        const vector<long long> &elements = testCase.second;

        long long totalSum = 0;
        for (long long num : elements)
        {
            totalSum = modAdd(totalSum, num);
        }

        long long result = 0;
        for (long long num : elements)
        {
            result = modAdd(result, modMul(modAdd(totalSum, -num), num));
        }

        long long denom = modMul(size, size - 1);
        long long finalResult = modMul(result, modInverse(denom));
        results.push_back(finalResult);
    }

    return results;
}

int main()
{
    int testCount;
    cin >> testCount;
    vector<pair<int, vector<long long>>> testCases(testCount);

    for (int i = 0; i < testCount; ++i)
    {
        int size;
        cin >> size;
        vector<long long> elements(size);
        for (int j = 0; j < size; ++j)
        {
            cin >> elements[j];
        }
        testCases[i] = {size, elements};
    }

    vector<long long> results = computeExpectedValue(testCount, testCases);
    for (long long result : results)
    {
        cout << result << endl;
    }

    return 0;
}


/* Code By Xerox  */