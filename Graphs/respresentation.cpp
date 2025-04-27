/*    Using adjacency matrix..
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int graph1[N][N];
int main()
{
    int n, m;  // no. of vertices,edges
    cin >> n >> m;
     Taking m inputs..
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph1[v1][v2] = 1;  // v1 is connected to v2
        graph1[v2][v1] = 1;  // v2 is also connected to v1
    }
    return 0;
}  */

/*    Using adjacency List..
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int> graph2[N];
int main()
{
    int n, m;  // no. of vertices,edges
    cin >> n >> m;
     Taking m inputs..
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
       graph2[v1].push_back(v2);  // v1 is connected to v2
       graph2[v2].push_back(v1); // v2 is also connected to v1
    }
    return 0;
}  */



/*    Using adjacency matrix.. and adjacency list.. with weights
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int graph1[N][N];
vector<pair<int,int>> graph2;
int main()
{
    int n, m;  // no. of vertices,edges
    cin >> n >> m;
     Taking m inputs..
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph1[v1][v2] = w;  // v1 is connected to v2
        graph1[v2][v1] = w;  // v2 is also connected to v1

        graph2[v1].push_back({v2,w});
        graph2[v2].push_back({v1,w});
    }
    return 0;
}  */
