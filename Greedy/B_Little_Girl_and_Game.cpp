#include<bits/stdc++.h>
using namespace std;
// bool isPal(string s) {
//     string str = s;
//     reverse(str.begin(),str.end());
//     return (str == s);
// }
int main() {
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(char ch:s) {
        mp[ch]++;
    }
    int cnt = 0;
    for(auto x:mp ){
        if(x.second%2 == 1) {
            cnt++;
        }
    }
    if(cnt%2== 0) {
        cout<<"Second"<<endl;
    }else {
        cout<<"First"<<endl;
    }

    return 0;
}