#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        char arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
            cout << endl;
        }

        // Solution Goes Here
        // for (int i = 0; i < m; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {

        //         vector<int> nums = arr[i][m];
        //         int s = 0;
        //         int e = m - 1;
        //         while (s <= e)
        //         {
        //             if (nums[s] == '*' && nums[e] == '.')
        //             {
        //                 swap(nums[s], nums[e]);
        //                 s++;
        //                 e--;
        //             }
        //             else if (nums[s] == '*' && nums[e] == '*')
        //             {
        //                 e--;
        //             }
        //             else if (nums[s] == '*' && nums[e] == 'o')
        //             {
        //                 e--;
        //             }
        //         }
        //         ans.push_back(nums);
        //     }
        // }
        for (int j = 0; j < m; j++)
        {
            for (int i = n - 2; i >= 0; i--)
            {
                if (arr[i][j] == '*')
                {
                    int k = i + 1;
                    while (k < n && arr[k][j] == '.')
                    {
                        k++;
                    }
                    swap(arr[k - 1][j], arr[i][j]);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}