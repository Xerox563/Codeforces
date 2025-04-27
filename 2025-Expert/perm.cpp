#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long long n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    if (n <= 3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    // 1,2,3,4,5,6,7
    int j = n - 1, i = n - 2;
    while (i >= 0)
    {
        cout << arr[i] << " ";
        i -= 2;
    }

    while (j >= 0)
    {
        cout << arr[j] << " ";
        j -= 2;
    }
    return 0;
}
