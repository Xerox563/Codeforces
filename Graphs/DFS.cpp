#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];

void dfs(int vertex)
{
    cout << vertex << endl;
    // if(vis[vertex])   return;
    vis[vertex] = true; // before entering the child first check either its visited or not if its not visited only then enter in that vertex..
    cout<<vertex<<" ";
    for (int child : g[vertex])
    {
      //  cout << "Parent: " << vertex << " Child : " << child << endl;
        //  if(vis[child])   continue;
        dfs(child);
    }
}
int main()
{
    int n, m; // n-> no.of vertices, m-> no. of edges..
    cin >> n >> m;
    for (int i = 0; i < 9; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        // v1 is connected to v2 and v2 is connected to v1..
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    return 0;
}

/*
6 9
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6
*/