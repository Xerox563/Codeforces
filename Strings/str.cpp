#include <bits/stdc++.h>
using namespace std;
int main()
{
    string si = "abcde";
    auto it = "asd"; // string literal
    auto i = si;     // string
    // string (s) -> set of charcaters and we can change the characters.
    // string literal -> set of charcaters and we can not  change the characters.
    // strings -> similar to vector
    string s = "abc";
    s[1] = 'e'; // char -> char || char !-> str
    vector<char> v = {'m', 'a', 'n'};  // not a string
    // cout<<v<<endl;
    // vector<string > st = {"Amit","Raj","Raju","Mohit","Shivam"};
    // cout<<st[0][1]<<endl;
    cout << s << endl;
    s.push_back('e');  // cant push_back strings..
    cout << s << endl;

    string t = "abc";
    t+= "def";
    cout<<t<<endl;
    return 0;
}