#include <bits/stdc++.h>
using namespace std;
void moveEnd(vector<char> &v, int n, int idx)
{
    vector<char> after;
    vector<char> before;
    // base case
    if(idx == n) {
        vector<int> ans;
        for(auto x:before) {
            ans.push_back(x);
        }
        for(auto y:after) {
            ans.push_back(y);
        }
        for(auto j : ans) {
            cout<<j<<" ";
        }
        return ;
    }
    if (v[idx] == 'x')
    {
        after.push_back(v[idx]);
    } else {
        before.push_back(v[idx]);
    }
    moveEnd(v,n,idx+1);
}
int main()
{
    vector<char> v{'x', 'a', 'b', 'x', 'f', 'x', 'd', 'x'};
  
    moveEnd(v,8, 0);
    return 0;
}