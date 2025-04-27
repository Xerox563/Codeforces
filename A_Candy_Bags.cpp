#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a,b;
    a = 1;
    b = n*n;
    // for printing n lines..
    for(int i=0;i<n;i++ ){
       for(int j=0;j<n/2;j++) {
        cout<<a<<" ";
        a++;
       }
       for(int j=0;j<n/2;j++) {
        cout<<b<<" ";
        b--;
       }

       cout<<endl;
    } 
     
    return 0;
}