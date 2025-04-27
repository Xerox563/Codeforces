#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string str;
    cin>>str;

    int cnt_n = count(str.begin(),str.end(),'n');
    int cnt_z = count(str.begin(),str.end(),'z');
    vector<int> v;
    while(cnt_n > 0) {
        v.push_back(1);
        cnt_n--;
    }
    while(cnt_z > 0) {
        v.push_back(0);
        cnt_z--;
    }
    sort(v.begin(),v.end(),greater<int>());
    for(auto x: v) {
        cout<<x<<" ";
    }
   
     return 0;
}