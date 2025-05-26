#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr(6);
    for (int &x : arr)
        cin >> x;

    int total = accumulate(arr.begin(), arr.end(), 0);

    if (total % 2 == 1)
    {
        cout << "NO" << endl;
        return 0;
    }

    int target = total / 2;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            for (int k = 0; k < 6; k++)
            {
                if (i != j && j != k && i != k)
                {
                    if (arr[i] + arr[j] + arr[k] == target)
                    {
                        cout << "YES" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}
