#include<bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin>>n;
    double avg = 0;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    double sum = 0;
    for(int i=0;i<n;i++) {
        sum+=arr[i];
    }
    avg = sum/n;
    cout<<fixed<<setprecision(12)<<avg<<endl;

   /* int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    long long total = 100;
    long long sumx = 0;
   // long long x;
    long long comp = 0;
    for(int i=0;i<n;i++) {
          long long a = arr[i]/100;
          sumx += a;
          comp += arr[i];
    }
    double ans = (sumx/comp);
    cout<<ans;  */
    return 0;
}