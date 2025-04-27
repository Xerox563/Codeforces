#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin>>t;
    while(t--) {
      int n;
      cin>>n;
      vector<int> arr(n);
      for(int i=0;i<n;i++) {
        cin>>arr[i];
      }

      // Solution....
      sort(arr.begin(),arr.end());
      arr[0] +=1;
      long long p = 1;
      for(int i=0;i<n;i++) {
        p*=arr[i];
      } 
      cout<<p<<endl;
    }
    return 0;
}