#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> nums;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 1)
    {
      nums.push_back(i);
    }
  }
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      nums.push_back(i);
    }
  }
  /*  int ans = -1;
    for (int i = 1; i <= n; i++)
    {
      if(i == k) {
        ans = nums[k];
        break;
      }
    }
    cout<<ans<<endl;  */
  cout << nums[k - 1] << endl;
  return 0;
}