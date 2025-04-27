#include<iostream>
#include<string>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
       string str;
       cin>>str;
       int cnt = 0;
       for(int i=0;i<str.length();i++) {
        cnt++;
       }
       if( cnt > 10) {
        cout<<str[0]<<(cnt-2)<<str[str.length()-1]<<endl;
       } else {
        cout<<str<<endl;
       }
    }

}
