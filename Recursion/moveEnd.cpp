#include <bits/stdc++.h>
using namespace std;
vector<char> before;
vector<char> after;
void moveEnd(string str, int n, int idx, vector<char> ans)
{
    // base case
    if(idx == n) {
       
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
    if (str[idx] == 'x')
    {
        after.push_back(str[idx]);
    } else {
        before.push_back(str[idx]);
    }
    moveEnd(str,n,idx+1,ans);
}
int main()
{
    string str = "axbxcxd";
    vector<char> ans;
    moveEnd(str,8, 0,ans);
    return 0;
}