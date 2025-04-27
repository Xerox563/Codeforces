#include <bits/stdc++.h>
using namespace std;
long int MOD = 1e9 + 7;
long long fact(int n) {
  long long fact = 1;
  for(int i=n;i>=1;i--) {
      fact*=i;
  }
  return fact;
}
void solve(int arr[] ,int n) {
    vector<long long> v;
    for(int i=0;i<n;i++){
        v.push_back(fact(i));
    }
    long long ans = accumulate(v.begin(),v.end(),0);
    cout<<ans<<endl;
    
}
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) {
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++) {
	        cin>>arr[i];
	    }
	    solve(arr,n);
	}
	return 0;
}
