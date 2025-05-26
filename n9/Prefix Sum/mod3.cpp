// Difference Arrays
/*
 * You are Given Q queries of the form [L,R], k means uu add k value to all the numbers in range [L,R]. The array is initaily filled with zeroes . What is the Final array ?
 * Brute Force -> to upodate the array for each query, and output the array at the end.
 * Time -> O(QN)
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n + 2]{}; // n+2 sized array, initialised with 0.
    while (q--)
    {
        int k;
        cin >> k;
        int l, r;
        cin >> l >> r;
        arr[l] += k;     // Adds k from L -> N
        arr[r + 1] -= k; // Removes k from R+1 -> N
        // We simply have -> (L -> R)
    }

    for (int i = 1; i <= n; i++)
    {
        arr[i] += arr[i - 1]; // Prefix Sum on Difference Array
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
