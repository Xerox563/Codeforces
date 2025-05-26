// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void solve()
// {
//     ll n, coins;
//     cin >> n >> coins;
//     vector<int> arr(n);

//     // Reading array elements
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int odds = 0, evens = 0, cuts = 0;
//     vector<int> possibleCuts; // To store possible cut costs

//     // Traverse through the array
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 1)
//         {
//             odds++;
//         }
//         else
//         {
//             evens++;
//         }

//         // When the number of odds and evens becomes equal, we can consider a cut
//         if (odds == evens && i + 1 < n)
//         {
//             // Calculate the cost of making a cut here
//             possibleCuts.push_back(abs(arr[i + 1] - arr[i]));
//         }
//     }

//     // Sort possible cuts in increasing order to maximize the number of cuts
//     sort(possibleCuts.begin(), possibleCuts.end());

//     // Attempt to make cuts within the available coins
//     for (int cost : possibleCuts)
//     {
//         if (coins >= cost)
//         {
//             cuts++;
//             coins -= cost;
//         }
//         else
//         {
//             break; // No more cuts can be made
//         }
//     }

//     cout << cuts << endl;
// }

// int main()
// {
//     long long t;
//     t = 1;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

// * -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -

//  Cant be this because we can have the min cost at last also so we cant continuously deduct it from coins ..
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, coins;
    cin >> n >> coins;
    vector<int> arr(n);

    // Reading array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int odds = 0, evens = 0, cuts = 0;

    // Traverse through the array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            odds++;
        }
        else
        {
            evens++;
        }

        // When odds and evens become equal, we check if we can make a cut
        if (odds == evens && i + 1 < n)
        {
            // Calculate the cost of the cut between arr[i] and arr[i+1]
            int cutCost = abs(arr[i + 1] - arr[i]);

            // If we can afford the cut, make it and deduct the cost from coins
            if (coins >= cutCost)
            {
                cuts++;
                coins -= cutCost;
            }
        }
    }

    cout << cuts << endl;
}

int main()
{
    long long t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
