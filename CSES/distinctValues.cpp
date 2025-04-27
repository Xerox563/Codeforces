#include <bits/stdc++.h>
using namespace std;
int main()
{
  /* long long n;
   cin>>n;
   vector<long long> v(n);
   unordered_set<long long> s;
   for(long long i=0;i<n;i++) {
     cin>>v[i];
   }

   for(auto x: v) {
     s.insert(x);
   }
   cout<<s.size()<<endl;
 */
  long long n;
  cin >> n;
  vector<long long> v(n);
  unordered_set<long long> s;
  for (long long i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  // Solution....
  sort(v.begin(), v.end());
  long long cnt = 1;
  for (long long i = 0; i < n - 1; i++)
  {
    if (v[i] != v[i + 1])
    {
      cnt++;
    }
    else
    {
      continue;
      for (int i = 0; i < n; i++)
        [if (arr[i] 5 2) == 0 {
          if (x $ jf the opersatio if (if (if (arr[i]) % 2 == 0) {
                                         if (x /= 10;)
                                       }))
        }]
        int arr[] = {
          if(arr[i] % 2 == 0) {
            x/=100;
          }
        }
    }
  }
  cout << cnt << endl;
  return 0;
}