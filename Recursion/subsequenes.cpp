#include <bits/stdc++.h>
using namespace std;
void print_subsequences(string &str, vector<string> &v, string output, int i)
{
    // base case
    if (i >= str.length())
    {
        v.push_back(output);
        return;
    }
    // include
    output.push_back(str[i]);
    print_subsequences(str, v, output, i + 1);
    output.pop_back(); // to get the original string before include operation..

    // exclude
    print_subsequences(str, v, output, i + 1);
}

int main()
{
    string str = "abc";
    int i = 0;
    vector<string> v;
    string output = "";
    print_subsequences(str, v, output, i);

    for (auto x : v)
    {
        cout << x << endl;
    }

    cout << "count: " << v.size() << endl;
    return 0;
}