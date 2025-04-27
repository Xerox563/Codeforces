#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m; // m-> no. of candies..
    int maxi(0);
    int last;
    double t;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (ceil(t / m) >= maxi)
        {
            last = i;
            maxi = ceil(t / m);
        }
    }
    cout << last << endl;
    // Solution Part....

    /*  vector<int> child(n);
      for (int i = 0; i < n; i++)
      {
          child[i] = i;
      }
      int i=1;
      for (auto x : arr)
      {
          if (x <= m)
          {
              int val = x;
              auto it = find(arr.begin(), arr.end(), val);
              arr.erase(it);
              auto it = find(child.begin(),child.end(),i);
              child.erase(it);
          }
          else
          {
              x = x - m;
              rotate(arr.begin(),arr.begin() + 1,arr.end());
              rotate(child.begin(),child.begin() + 1,child.end());
          }
          i++;
      }
      */
}