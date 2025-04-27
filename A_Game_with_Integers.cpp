#include<bits/stdc++.h>
using namespace std;
int main() {
    long long T;
    cin>>T;
    while(T--) {
        long long n;
        cin>>n;
        if(n%3 == 0) {
            cout<<"Second"<<endl;
        } else {
            cout<<"First"<<endl;
        }
    }
    return 0;
}