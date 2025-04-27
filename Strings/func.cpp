#include <bits/stdc++.h>
using namespace std;
int main()
{
    // [v.begin(),v.end()) -> (inclusive,exclusive)....
    // reverse(v.begin(),v.end()) -> reverses from v.begin() to v.end()-1  ..
    string str = "abcde";
    cout << str.front() << endl; // gives the first character of string..
   // str.pop_back(); // removes the last charcter of string..
    cout << str.back() << endl;  // gives the last charcter of string..
    // Time => O(nlogn);

    string t(4,'a');
   // cout<<t<<endl;
   transform(str.begin(),str.end(),t.begin()+1,::toupper);
   cout<<t<<endl;
    return 0;
} 