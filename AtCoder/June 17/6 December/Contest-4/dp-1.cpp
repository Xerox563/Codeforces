#include <bits/stdc++.h>
using namespace std;
int n;
int t[1001];
int s[1001];
int x, k;
int taken[1001];
bool check(int level)
{
    int tt = 0;
    int it = 0;
    for (int i = 0; i < level; i++)
    {
        if (taken[i])
        {
            tt += t[i];
            it += 1;
        }
    }
    tt += t[level];
    it += 1;
    if (tt <= x && it <= k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int rec(int level) // max skill i can make from current level till n-1;
{
    // level -> curr item (0-> n-1)
    // prunging

    // base case
    if (level == n)
    {
        return 0;
    }
    // compute
    // Loop over choices
    // not take
    int ans = rec(level + 1);
    // take
    if (check(level))
    {
        // place the chnage
        taken[level] = 1;
        // move
        // max in level +1 -> n
        ans = max(ans, s[level] + rec(level + 1));
        // revert
        taken[level] = 0;
    }

    // return
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i] >> s[i];
    }
    cin >> x >> k;
    rec(0);
    return 0;
}