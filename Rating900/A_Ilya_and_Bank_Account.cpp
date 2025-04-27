#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    if(n > 0) {
        return n; 
    } else {
        string str = to_string(n);
        int len = str.length();
        int f1 = len - 1;
        int f2 = len - 2;
        string temp = str;
        str.erase(str.begin() + f1);
        int a = stoi(str);
        temp.erase(temp.begin() + f2);
        int b = stoi(temp);
        return max(a,b);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    int n;
    cin>>n;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        cout<<solve(n);
    }
}