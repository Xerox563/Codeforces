#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, temp;
    cin >> s;
    cin >> temp;
    reverse(temp.begin(), temp.end());
    // if (s == temp)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
    cout<< (s == temp ? "YES" : "NO") <<endl;
    return 0;
}