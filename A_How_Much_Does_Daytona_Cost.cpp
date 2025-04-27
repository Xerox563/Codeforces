#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--) {
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    bool flag = false;
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    for(int i=0;i<n;i++) {
        if(v[i] == k) {
          flag = true;
        }
    }
    if(flag) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
  }
    return 0;
}