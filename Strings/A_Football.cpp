#include <iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    bool flag = false;
    string s1 = "0000000";
    string s2 = "1111111";
    bool isFound1 = str.find(s1) != string::npos;
    bool isFound2 = str.find(s2) != string::npos;
    if (isFound1 || isFound2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}