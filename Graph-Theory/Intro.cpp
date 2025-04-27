/*
  * n-> no. of nodes  || m -> no. of edges
     m -> refers to the next m lines
     eg n = 5 m = 5
     -> n nodes followed by m lines
        2 1 -> 2 is connected to 1 viceversa (edge between 2 1 and then edge between 1 2)
        2 3
        3 4
        1 4
        4 2
  */

/*
   * ->  Matrix Way
   * adj[n+1][m+1] -> for 1 based indexing
   * adj[n][m] -> for 0 based indexing
   * This matrix tells where there is an edge between two node or not
   * space -> O(n*m);

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    // Graph is stored here
    int adj[n + 1][m + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    return 0;
}

/*
   * Matrix Way   -> vector<int> adj[n+1];
   * Empty vector stores the adjacent neighbours of the the given node
   * Space -> O(2E) // Every edge is connected to two nodes
   * For every egdge you are storing twice.
   * This matrix tells where there is an edge between two node or not.

*/
#include <bits/stdc++.h>
using namespace std;
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
    return 0;
}

/*
 * Directed Graph -> Just edge from u -> v
 * Space -> O(E) -> we are consuming just one edge.
 */

#include <bits/stdc++.h>
using namespace std;
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
       
    }
    return 0;
}

/*
 * Weighted Graph -> edges with weight
 * Space -> O(E) -> we are consuming just one edge.
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    // Graph is stored here
    int adj[n + 1][m + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u][v] = w;
        adj[v][u] = w;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    // Graph is stored here
    vector<pair<int, int>> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    return 0;
}