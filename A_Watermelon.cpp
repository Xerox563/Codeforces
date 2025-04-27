#include<iostream>
using namespace std;
int main() {
    long long n;
    cin>>n;
   /* if(n%2 == 0 && n >2) {
        cout<<"YES";
    } else {
        cout<<"NO";
    } */
    long long a = n;
    long long b = 2;
    if(a % 2 == 0 && b % 2 == 0) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

}
