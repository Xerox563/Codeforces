#include <bits/stdc++.h>
// using namespace std;

// int main() {
//     long long tc;
//     cin >> tc;
//     while (tc--) {
//         int ones, twos;
//         cin >> ones >> twos;
        
//         // Calculate the total sum
//         int x = ones + 2 * twos;
        
//         // Check the conditions for a possible solution
//         if (x % 2 == 0 && x / 2 >= ones && x / 2 <= ones + 2 * twos) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int ones, twos;
        cin >> ones >> twos;
        // Solution starts
        if (ones % 2 == 0 && (twos % 2 == 0 || ones != 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
