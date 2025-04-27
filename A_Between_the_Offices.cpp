#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; // no. of days..
    string s;
    cin >> s;

    int cnt_s_f = 0; // seatle to francisco
    int cnt_f_s = 0; // francisco to seatle
    for(int i=0;i<n-1;i++) {
        if(s[i] == 'S' && s[i+1] == 'F') {
             cnt_s_f++;
        } else if(s[i] == 'S' && s[i+1] == 'S') {
            continue;
        } else if(s[i] == 'F' && s[i+1] == 'F') {
            continue;
        } else {
            cnt_f_s++;
        }
    }

    if(cnt_f_s >= cnt_s_f) {
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }
    return 0;
}