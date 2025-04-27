#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;
    /*  bool flag = true;
      while (n--)
      {
          int x, y;
          cin >> x >> y;
          if (x <= s)
          {
              s += y;
          }
          else
          {
              flag = false;
          }
      }
      if (flag == true)
      {
          cout << "YES" << endl;
      }
      else
      {
          cout << "NO" << endl;
      }   */
    pair<int, int> arr[1000];
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr, arr + n); // sort elements on the basis of first array element..
    for (int i = 0; i < n; i++)
    {
        if (s <= arr[i].first)
        {
            flag = 0;
            break;
        }
        else
        {
            s += arr[i].second;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}