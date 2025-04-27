#include<bits/stdc++.h>
using namespace std;
int main() {
    int nums[] = {0,0,1,1,1,2,2,3,3,4,4};
    int n = 11;
   unordered_set<int> s;
   for(int i=0;i<n;i++) {
    s.insert(nums[i]);
   }
   for(auto x: s) {
    cout<<x<<" ";
   }
    return 0;
}