#include <bits/stdc++.h>
using namespace std;

// Type Aliases
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

// Constants
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

// Utility Functions
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(v) (int)(v.size())
#define F first
#define S second
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define per(i, a, b) for (int i = a; i >= (b); --i)

// Fast I/O
void fastIO()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

// Read friendships and build adjacency list
unordered_map<int, unordered_set<int>> read_friendships(int m)
{
    unordered_map<int, unordered_set<int>> adj;
    rep(i, 0, m)
    {
        int u, v;
        cin >> u >> v;
        adj[u].insert(v);
        adj[v].insert(u);
    }
    return adj;
}

// Process active nodes and determine their next status
pair<unordered_set<int>, unordered_set<int>> process_active_nodes(
    const unordered_set<int> &act,
    const unordered_map<int, unordered_set<int>> &adj,
    const unordered_map<int, int> &stat)
{

    unordered_set<int> nxt_act, nxt_inact;
    for (int nd : act)
    {
        int active_friends = 0;
        for (int fr : adj.at(nd))
        {
            if (stat.count(fr) && stat.at(fr) == 1)
            {
                ++active_friends;
            }
        }
        if (active_friends == 3)
        {
            nxt_act.insert(nd);
        }
        else
        {
            nxt_inact.insert(nd);
        }
    }
    return {nxt_act, nxt_inact};
}

// Process inactive nodes and determine their next status
pair<unordered_set<int>, unordered_set<int>> process_inactive_nodes(
    int n,
    const unordered_set<int> &act,
    const unordered_map<int, unordered_set<int>> &adj,
    const unordered_map<int, int> &stat)
{

    unordered_set<int> nxt_act, nxt_inact;
    rep(nd, 0, n)
    {
        if (act.count(nd))
            continue;
        int active_friends = 0;
        for (int fr : adj.at(nd))
        {
            if (stat.count(fr) && stat.at(fr) == 1)
            {
                ++active_friends;
            }
        }
        if (active_friends < 3)
        {
            nxt_act.insert(nd);
        }
        else
        {
            nxt_inact.insert(nd);
        }
    }
    return {nxt_act, nxt_inact};
}

// Update status of active nodes
unordered_map<int, int> update_status(const unordered_set<int> &act)
{
    unordered_map<int, int> stat;
    for (int nd : act)
    {
        stat[nd] = 1;
    }
    return stat;
}

// Solution Template
void solve()
{
    int n, m, k;
    cin >> n >> m;
    auto adj = read_friendships(m);
    cin >> k;

    unordered_set<int> act;
    rep(i, 0, n) act.insert(i);

    unordered_map<int, int> stat;
    rep(i, 0, n) stat[i] = 1;

    int total = n;
    int days = 1;

    while (total < k)
    {
        ++days;

        auto [nxt_act, nxt_inact] = process_active_nodes(act, adj, stat);
        auto [inact_act, inact_inact] = process_inactive_nodes(n, act, adj, stat);

        act.clear();
        act.insert(nxt_act.begin(), nxt_act.end());
        act.insert(inact_act.begin(), inact_act.end());

        stat = update_status(act);
        total = act.size();
    }

    cout << days << "\n";
}

int main()
{
    fastIO();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/* Created By Amit @Xerox */
