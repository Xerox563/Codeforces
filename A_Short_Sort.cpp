#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        string str;
        cin>>str;
        if(str == "abc") {
            cout<<"YES"<<endl;
        }
        else if(str[0] == 'a' || str[1] == 'b' || str[2] == 'c') {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}