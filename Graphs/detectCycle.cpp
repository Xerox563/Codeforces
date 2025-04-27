#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];
bool dfs(int vertex, int par)
{
    // Take action on vertex after entering the vertex..
    vis[vertex] = true;
    bool isLoopExits = false;
    for (int child : g[vertex])
    {
        if (vis[child] && child == par)
            continue;
        // Take action on child before entering the child node..
        if (vis[child])
            return true;                   // root exits
        isLoopExits |= dfs(child, vertex); // agar ek bhi child nae loop detect kiya toh loop exits krta hai..
        // Take action on vertex after exiting the child node ..
    }
    // Take action on vertex before exiting the vertex..
    return isLoopExits;
}
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bool isLoopExits = false;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue; // already visited..
        if (dfs(i, 0))
        {
            isLoopExits = true;
            break;
        }
    }
    cout << isLoopExits << endl;
    return 0;
}

// DFS -> O(v+E)..