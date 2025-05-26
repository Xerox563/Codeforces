#include <bits/stdc++.h>
using namespace std;
void solve(string ip, string op)
{
    // Base Case
    if (ip.length() == 0)
    {
        cout << "'" << op << "'" << endl;
        return;
    }

    // for smaller ip1

    string op1 = op; // Do not Take
    string op2 = op;
    op2.push_back(ip[0]); // Take

    ip.erase(ip.begin() + 0);

    solve(ip, op1);
    solve(ip, op2);
    return;
}
int main()
{
    string ip = "abc";
    string op = "";
    solve(ip, op);
    return 0;
}