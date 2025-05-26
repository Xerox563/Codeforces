#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Function to calculate (base ^ exp) % mod
ll computeModularExponentiation(ll base, ll exp, ll mod)
{
    ll result = 1;
    while (exp > 0)
    {
        if (exp % 2 != 0)
        {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to determine the K-th missing positive integer from a sorted list
int determineKthMissingPositive(const vector<ll> &sortedNumbers, ll k)
{
    // If the smallest number in the array is greater than k, then k is the missing number
    if (sortedNumbers[0] > k)
    {
        return k;
    }

    int start = 0;
    int end = sortedNumbers.size();

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (sortedNumbers[mid] - mid - 1 >= k)
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }

    return sortedNumbers[start - 1] + k - (sortedNumbers[start - 1] - (start - 1) - 1);
}

void processTestCase()
{
    ll numElements, k;
    cin >> numElements >> k;
    vector<ll> elements(numElements);

    for (int i = 0; i < numElements; ++i)
    {
        cin >> elements[i];
    }
    sort(elements.begin(), elements.end(), greater<ll>());

    if (elements[0] == 0)
    {
        cout << k << endl;
        return;
    }

    if (numElements == 1)
    {
        cout << determineKthMissingPositive(elements, k - 1) << endl;
        return;
    }

    ll currentGCD = elements[0];
    for (int i = 1; i < numElements; ++i)
    {
        currentGCD = __gcd(currentGCD, elements[i]);
    }

    vector<ll> modifiedElements(numElements);
    ll multiplier = 0;
    for (int i = 0; i < numElements; ++i)
    {
        modifiedElements[i] = multiplier * currentGCD;
    }
    ++multiplier;

    ll result = determineKthMissingPositive(modifiedElements, k - 1);
    cout << result << endl;
}

int main()
{
    ll testCases;
    cin >> testCases;
    while (testCases--)
    {
        processTestCase();
    }
    return 0;
}
