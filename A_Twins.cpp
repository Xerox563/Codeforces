/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + n);
    int cnt = 0;
    int prefix = 0;
    for (int i = 1; i < n; i++)
    {
        prefix += arr[i];
        if (prefix <= sum - prefix)
        {
            cnt += 1;
        } else {
            break;
        }
    }
    cout<<cnt+1<<endl;

    return 0;
}  */

// Approach-2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, i, j, sum, cnt, ans;
    while (cin >> n)
    {
        long long a[n];
        sum = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sum = sum / 2;
        sort(a, a + n);
        cnt = 0;
        ans = 0;
        for (i = n - 1; i >= 0; i--)
        {
            ans += a[i];
            cnt++;
            if (ans > sum)
                break;
        }
        cout << cnt << endl;
    }
    return 0;
}
