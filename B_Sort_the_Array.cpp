#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Solution Goes....
    /*  if(is_sorted(arr.begin(),arr.end())) {
          cout<<"yes"<<endl;
      } else {
         swap(arr[0],arr[n-1]);
         if(is_sorted(arr.begin(),arr.end())) {
          cout<<"yes"<<endl;
         } else {
          cout<<"no"<<endl;
         }
      }   */
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        mp[arr[i]] = i;
    }

    int s = 0;
    int e = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            s = 1;
        }
        else
        {
            e = mp[arr[i]];
            break;
        }
        reverse(arr + s, arr + e + n);
    }
    return 0;
}