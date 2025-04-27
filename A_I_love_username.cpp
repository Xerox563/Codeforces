#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    long long cnt = 0;
    int maxi = v[0];
    int mini = v[0];
    for(int i=1;i<n;i++) {
        if(v[i] > maxi) {
            maxi = v[i];
            cnt++;
        }
    }

    for(int i=1;i<n;i++) {
        if(v[i] < mini) {
            mini = v[i];
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}