#include <bits/stdc++.h>
using namespace std;

void find_key(string str, int i, int n, char key, int &cnt)
{
    // base case
    if (i >= n)
    {
        return;
    }
    // Processing
    if (str[i] == key)
    {
        cnt+=1;
    }
    // recursive
    return find_key(str, i + 1, n, key, cnt);
}

int main()
{
    string str = "loveBBBBBBBabbar";
    int n = str.length();
    int cnt = 0;
    int i = 0;
    find_key(str, i, n, 'B', cnt);
    cout << cnt << endl;

    return 0;
}