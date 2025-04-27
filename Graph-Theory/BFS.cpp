#include <bits/stdc++.h>
using namespace std;
void bfs(int s, vector<int> adj[], vector<vector<int>> &ans)
{
}
int main()
{
    int n, m;
    cin >> n >> m;
    // Graph is stored here
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>> ans = bfs();
    return 0;
}

/*
 * Level Order Traversal -> Level By Level
 */