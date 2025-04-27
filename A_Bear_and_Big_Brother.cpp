#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int ans = 0;
    // Lets Conquer this Problem .
    while(a <= b) {
       a*=3;
       b*=2;
       ans++;
    }
    cout<<ans;
    return 0;
}