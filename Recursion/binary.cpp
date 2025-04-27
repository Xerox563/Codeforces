#include <bits/stdc++.h>
using namespace std;
vector<string> v;

void solve(string s, int n) {
    v.clear(); // Clear the vector for each test case
    for (int i = 0; i < n; i++) {
        string modified = s;
        modified.erase(i, 1);
        v.push_back(modified);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(s, n);
       unordered_set<string> st;
       for(auto x: v) {
        st.insert(x);
       }
       cout<<st.size()<<endl;
    }
    return 0;
}
