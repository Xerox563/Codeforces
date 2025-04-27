#include <bits/stdc++.h>
#include <cctype>
using namespace std;
void solve(string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << " ";
        return;
    }

    if (isalpha(ip[0]))
    {
        string op1 = op;
        string op2 = op;
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));
        ip.erase(ip.begin() + 0);
        // if (islower(ip[0]))
        // {
        //     op2.push_back(toupper(ip[0]));
        // }
        // else
        // {
        //     op2.push_back(tolower(ip[0]));
        // }
        solve(ip, op1);
        solve(ip, op2);
    }
    else
    {
        string op1 = op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin() + 0);
        solve(ip, op1);
    }
}
int main()
{
    string ip = "a1B2";
    string op = "";
    solve(ip, op);
    return 0;
}
