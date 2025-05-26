#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int l = 0;
        int r = n - 1;
        int suml = a[0];
        int sumr = a[n - 1];
        int ans = 0;

        while (l < r)
        {
            if (suml == sumr)
            {
                ans = max(ans, l + 1 + n - r); // Update the maximum length when the sums are equal
            }

            if (suml <= sumr)
            {
                l++;
                suml += a[l]; // Move the left pointer and add the element to `suml`
            }
            else
            {
                r--;
                sumr += a[r]; // Move the right pointer and add the element to `sumr`
            }
        }

        cout << ans << endl;
    }

    return 0;
}
