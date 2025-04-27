#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        // Solution.....
        //  long long int summ = accumulate(arr.begin(), arr.end(), 0);
        //  long long int x = sqrtl(summ);
        int x = sqrt(sum);
        if (x * x == sum)
        {
            cout << "YES" << endl;
        }
        else
        {

            cout << "NO" << endl;
        }
    }
    return 0;
}