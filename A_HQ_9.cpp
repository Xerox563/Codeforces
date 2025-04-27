#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    string ans = "";
   for(int i=0;i<str.length();i++) {
    if(str.find("H") != string::npos) {
        ans= "YES";
        break;
    }
    if(str.find("Q") != string::npos) {
        ans= "YES";
        break;
    }
    if(str.find("9") != string::npos) {
        ans= "YES";
        break;
    }
    
  
   }
   if( ans == "") {
    cout<<"NO"<<endl;
   } else {
    cout<<"YES"<<endl;
   }
    return 0;
}