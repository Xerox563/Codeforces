#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // long long ans = -1;
    // int arr[n];
    // for(int i=0;i<n;i++) {
    //     cin>>arr[i];
    // }
    /*  vector<int> v(n);

      sort(v.begin(),v.end());
      long long ele = v[0];
      for(auto x: v){
       if(x != ele) {
           ans = x;
           break;
       }
      }
       cout<<ans<<endl;  */
    int n, a;
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        s.insert(a);
    }
    if (s.size() < 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        set<int>::iterator it;
        int c = 0;
        for (it = s.begin(); it != s.end(); it++)
        {
            if (c == 1)
            {
                cout << *it << endl;
                break;
            }
            c++;
        }
    }

    return 0;
}