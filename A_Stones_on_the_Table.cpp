#include<bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   string str;
   cin>>str;
   int cnt = 0;
   for(int i=0;i<n-1;i++) {
    if(str[i] == str[i+1]) {
        cnt+=1;
    }
   }
   cout<<cnt<<endl;
    return 0;
}