#include <bits/stdc++.h>
using namespace std;

int main()
{
   string str;
   cin>>str;
   vector<char> nums;
   sort(str.begin(),str.end());
   for(int i=0;i<str.length();i++) {
    if(isdigit(str[i])) {
        nums.push_back(str[i]);
    }
   }
   vector<char> ans;
   for(auto x: nums) {
    ans.push_back(x);
    ans.push_back('+');
   }
   ans.pop_back();
   for(auto x: ans) {
    cout<<x;
   }

    return 0;
}