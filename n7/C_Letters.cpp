// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long n, m;
//     cin >> n >> m;

//     // Input number of rooms in each dormitory
//     vector<long long> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     // Input room numbers for letters
//     vector<long long> b(m);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }

//     // Vector to store dormitory ranges
//     vector<pair<long long, pair<long long, long long>>> v;

//     long long mini = 1; // Initial room number in the global numbering
//     for (int i = 0; i < n; i++)
//     {
//         long long num = a[i]; // Number of rooms in the i-th dormitory
//         // Store the dormitory index and its room range [mini, mini + num - 1]
//         v.push_back({i + 1, {mini, mini + num - 1}});
//         mini += num; // Update mini to the next dormitory's starting room number
//     }

//     // Vector to store the results
//     vector<pair<long long, long long>> ans;

//     // Process each room number in b
//     for (int i = 0; i < m; i++)
//     {
//         long long roomNumber = b[i];
//         // Linear search through the dormitory ranges to find the correct dormitory
//         for (auto x : v)
//         {
//             if (roomNumber >= x.second.first && roomNumber <= x.second.second)
//             {
//                 // Calculate the local room number within the dormitory
//                 long long localRoomNumber = roomNumber - x.second.first + 1;
//                 ans.push_back({x.first, localRoomNumber});
//                 break; // Found the correct dormitory, so break the loop
//             }
//         }
//     }

//     // Output the results
//     for (auto x : ans)
//     {
//         cout << x.first << " " << x.second << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    vector<long long> a(n); // Number of rooms in each dormitory
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long long> b(m); // Room numbers to deliver letters to
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    // Compute prefix sums for room counts
    vector<long long> prefixSum(n);
    prefixSum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + a[i];
    }

    // Two-pointer technique to deliver letters
    long long dormitoryIndex = 0; // Start with the first dormitory
    for (int i = 0; i < m; i++)
    {
        long long roomNumber = b[i];

        // Move dormitoryIndex to the correct dormitory
        while (roomNumber > prefixSum[dormitoryIndex])
        {
            dormitoryIndex++;
        }

        // Calculate the room number within the dormitory
        long long localRoomNumber = roomNumber - (dormitoryIndex == 0 ? 0 : prefixSum[dormitoryIndex - 1]);

        // Output the dormitory and local room number
        cout << dormitoryIndex + 1 << " " << localRoomNumber << endl;
    }

    return 0;
}
