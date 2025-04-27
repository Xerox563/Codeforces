#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    //     string ans = "";
    //     unordered_map<char,int>mp;
    //     mp.insert({'h',1});
    //     mp.insert({'e',2});
    //     mp.insert({'l',3});
    //     mp.insert({'o',4});
    //    vector<int>v;
    //     for(int i=0;i<s.length();i++) {
    //         if(mp.find(s[i]) != mp.end()) {
    //             v.push_back(mp[s[i]]);
    //         }
    //     }
    //     if(is_sorted(v.begin(),v.end())) {
    //         cout<<"YES"<<endl;
    //     } else {
    //         cout<<"NO"<<endl;
    //     }
    string target = "hello";
    int idx = 0;
    for (char ch : s)
    {
        if (ch == target[idx])
        {
            idx++; // check for next character..
        }
    }
    if (idx == target.length())  // if whole target string is traversed means hello is found..
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
