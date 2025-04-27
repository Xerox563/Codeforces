#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];
vector<vector<int>> cc; // Inorder to store the connected Components..
vector<int> current_cc;
void dfs(int vertex)
{
    // Take action on vertex after entering the vertex..
    vis[vertex] = true;
    current_cc.push_back(vertex);
    for (int child : g[vertex])
    {
        // Take action on child before entering the child node..
        if (vis[child])
            continue;
        dfs(child);
        // Take action on vertex after exiting the child node ..
    }
    // Take action on vertex before exiting the vertex..
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
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        cnt++;
    }

    cout << "No. of Connected Components: " << cnt << endl;
    for (auto c_cc : cc)
    {
        for (int vertex : c_cc)
        {
            cout << vertex << " ";
        }
        cout << endl;
    }
    return 0;
}

// DFS -> O(v+E)..