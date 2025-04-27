#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--) 
    {
        int n,init;
        cin>>n>>init;
        vector<int> arr(n);
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        long long sum = accumulate(arr.begin(),arr.end(),0);
        if(init > sum ) {
            cout<<"0"<<endl;
        } else {
            cout<<sum - init<<endl;
        }
    } 
    return 0;
}