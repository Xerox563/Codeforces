// #include <bits/stdc++.h>
// using namespace std;
// int find_neg(int arr[], int first, int last)
// {
//     int temp = INT_MAX;
//     for (int i = last; i >= first; i--)
//     {
//         if (arr[i] < 0)
//         {
//             temp = arr[i];
//         }
//     }
//     return temp;
// }

// void solve(int arr[], int n, int k)
// {
//     vector<int> ans;
//     for (int i = k; i < n; i++)
//     {
//         int first = i - k;
//         int last = i;
//         ans.push_back((arr, first, last));
//     }
//     for(auto x: ans){
//         cout<<x<<" ";
//     }
// }

// int main()
// {
//     int arr[] = {-3, 2, 7, -1, 2, -3, 5, 8, 9};
//     int n = 9;
//     int k = 3;
//     solve(arr, n, k);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void solve(int arr[], int n, int k)
{

    int maxSum = INT_MIN;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j <= k + i - 1; j++)
        {
            if (arr[j] < 0)
            {
                cout << arr[j] << " ";
                break;
            }
        }
        maxSum = max(maxSum, sum);
    }
    cout << 0 << " ";
}
int main()
{
    int arr[] = {-3, 2, 7, -1, 2, -3, 5, 8, 9};
    int n = 9;
    int k = 3;
    solve(arr, n, k);
    return 0;
}