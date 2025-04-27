#include <bits/stdc++.h>
using namespace std;

bool isMagical(string str)
{
    for(int i=0;i<str.length();i++) {
        if(str[i] != '1' && str[i] != '4') {
            return false;
        }
    }
    if(str[0] != '1') {
        return false;
    } 
    if(str.find("444") != string::npos) {
        return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;
    cin >> str;
    if (isMagical(str))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
