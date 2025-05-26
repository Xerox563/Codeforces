#include <bits/stdc++.h>
using namespace std;
#define ll long long

// * Building Segment Tree
void buildSegmentTree(int i, int l, int r, vector<ll> &arr, vector<ll> &segTree)
{
    if (l == r)
    {
        segTree[i] = arr[l];
        return;
    }
    int mid = l + (r - l) / 2;
    // Left and right child build
    buildSegmentTree(2 * i + 1, l, mid, arr, segTree);
    buildSegmentTree(2 * i + 2, mid + 1, r, arr, segTree);
    segTree[i] = segTree[2 * i + 1] + segTree[2 * i + 2];
}

// * Querying for each Query
ll Query(int s, int e, int i, int l, int r, vector<ll> &segTree)
{
    // Out of Bound
    if (l > e || s > r)
    {
        return 0; // Return 0 for sum queries
    }
    // Inside the range
    if (l >= s && r <= e)
    {
        return segTree[i];
    }
    // Overlapping ranges -> Answer can be in any of the halves
    int mid = l + (r - l) / 2;
    return Query(s, e, 2 * i + 1, l, mid, segTree) + Query(s, e, 2 * i + 2, mid + 1, r, segTree);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<ll> segTree(4 * n);
    buildSegmentTree(0, 0, n - 1, arr, segTree);

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        a -= 1; // Convert to 0-based index
        b -= 1;
        ll ans = Query(a, b, 0, 0, n - 1, segTree);
        cout << ans << "\n";
    }
    return 0;
}
