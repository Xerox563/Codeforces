#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; // length of permutation.
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int change[n];
         if (n==1)
        {
            cout<<"-1\n";
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            change[i] = arr[i];
        }

        sort(change, change + n);

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == change[i])
            {
                if (i != n - 1)
                {
                    swap(change[i], change[i + 1]);
                }
                else
                {
                    swap(change[i], change[i - 1]);
                }
            }
        }
      
        for (int i = 0; i < n; i++)
        {
            cout << change[i] << " ";
        }
        cout << endl;
    }

    return 0;
}