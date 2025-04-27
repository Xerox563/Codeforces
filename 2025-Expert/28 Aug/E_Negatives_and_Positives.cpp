// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false), cin.tie(nullptr);
//     long long tc;
//     cin >> tc;
//     while (tc--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//             cin >> arr[i];

//         // solution Goes Here
//         /* sort(arr.begin(), arr.end());
//          for (int i = 0; i < n - 1; i++)
//          {
//              // Logic :if(two adjacent negatives Invert their sign )
//              if (arr[i] < 0 && arr[i + 1] < 0)
//              {
//                  arr[i] = -1 * arr[i];
//                  arr[i + 1] = -1 * arr[i + 1];
//              }
//              else if (arr[i] < 0 && arr[i + 1] >= 0)
//              // If(One is Negative and Other is Positive then whose Abs(value) is greater ?
//              {
//                  if (abs(arr[i] > arr[i + 1]) && arr[i + 1] != 0)
//                  {
//                      arr[i] = -1 * arr[i];
//                      arr[i + 1] = -1 * arr[i + 1];
//                  }
//                  else if (abs(arr[i] > arr[i + 1]) && arr[i + 1] == 0)
//                  {
//                      arr[i] = -1 * arr[i];
//                      arr[i + 1] = arr[i + 1];
//                  }
//              }
//          }
//          int sum = 0;
//          for (int i = 0; i < n; i++)
//              sum += arr[i];
//          cout << sum << endl;  */
//         vector<int> neg, pos, zeroes;
//         int sum = 0;
//         for (auto x : arr)
//         {
//             if (x > 0)
//             {
//                 pos.push_back(x);
//             }
//             else if (x < 0)
//             {
//                 neg.push_back(x);
//             }
//             else
//             {
//                 zeroes.push_back(x);
//             }
//         }
//         sort(pos.begin(),pos.end(),greater<int>());
//         sum += accumulate(pos.begin(),pos.end(),0);
//         if (neg.size() % 2 == 1)
//         {
//             if(zeroes.size() == 0) {
//                 int maxi = *max_element(neg.begin(),neg.end());

//             }
//         }
//         else
//         {
//         }
//     }
//     return 0;
// }

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
        vector<int> arr(n);
        long long res = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            res += abs(arr[i]);
            if (arr[i] < 0)
                c++;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
                arr[i] = abs(arr[i]);
        }
        if (!(c % 2))
        {
            cout << res << endl;
            continue;
        }
        int x = *min_element(arr.begin(), arr.end());
        cout << res - (2 * x) << endl;
    }
}


