#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> leaf_weight;
vector<int> parent;
void dfs(int v, int p, const dtring &s)
{
    parent[v] = p;
    bool isLeaf = true;

    for (int u : adj[v])
    {
        if (u != p)
        {
            isLeaf = false;
            dfs(u, v, s);
        }
    }
    if (isLeaf)
    {
        int weight = 0;
        int current = v;
        while (current != -1)
        {
            int par = parent[current];
            if (par != -1)
            {
                if (s[par] == '1' && s[current] == '0')
                    weight++;
                if (s[par] == '0' && s[current] == '1')
                    weight--;
            }
            current = par;
        }
        leaf_weight.push_back(weight);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        adj.assign(n + 1, vector<int>());
        leaf_weight.clear();
        parent.assign(n + 1, -1);
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        string s;
        cin >> s;
        s = " " + s;
        dfs(1, -1, s);
        int pos_weights = 0;
        for (int W : leaf_weight)
        {
            if (W != 0)
                pos_weights++;
        }
        cout << pos_weights << endl;
    }
}
