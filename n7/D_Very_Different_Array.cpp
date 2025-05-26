// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t; // number of test cases
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         vector<int> a(n), b(m);

//         // Input array a
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         // Input array b
//         for (int i = 0; i < m; i++)
//         {
//             cin >> b[i];
//         }

//         // Sort both arrays
//         sort(a.begin(), a.end());
//         sort(b.begin(), b.end());

//         long long ans = 0;

//         int l1 = 0, r1 = n - 1, l2 = 0, r2 = n - 1;
//         while (l1 <= r2)
//         {
//             int left = abs(a[l1] - b[r2]);
//             int right = abs(a[r1] - b[l2]);
//             if (left >= right)
//             {
//                 ans += left;
//                 l1++;
//                 r2--;
//             }
//             else
//             {
//                 ans += right;
//                 l2--;
//                 r1++;
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

struct test {
    void solve() {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> b(m);
        for (int i = 0; i < m; i++) cin >> b[i];
        
        // Sort a in ascending order and b in descending order
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        
        vector<int> c(n);
        long long s = 0;
        
        // Assign the largest available `m - n + i` elements from `b` to `c`
        for (int i = 0; i < n; i++) {
            c[i] = b[m - n + i];  // Corrected subtraction operator here
            s += abs(c[i] - a[i]); // Corrected subtraction operator here
        }
        
        long long res = 0;
        
        // Maximize the total difference by adjusting elements of `c`
        for (int k = 0; k <= n; k++) {
            res = max(res, s);
            if (k < n) {
                // Update `s` by adjusting the current element of `c`
                s -= abs(c[k] - a[k]); // Corrected subtraction operator here
                c[k] = b[k];           // Use the first `k` elements from `b`
                s += abs(c[k] - a[k]);  // Corrected subtraction operator here
            }
        }
        cout << res << "\n";
    }
};

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        test().solve();
    }
    return 0;
}
