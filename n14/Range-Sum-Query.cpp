#include <bits/stdc++.h>
using namespace std;
#define ll long long

// * Building Segment Tree
void buildSegmentTree(int i, int l, int r, vector<int> &arr, vector<int> &segTree)
{
    if (l == r)
    {
        segTree[i] = arr[l];
        return; // Correctly return after base case
    }
    int mid = l + (r - l) / 2;
    // Left and right child build
    buildSegmentTree(2 * i + 1, l, mid, arr, segTree);
    buildSegmentTree(2 * i + 2, mid + 1, r, arr, segTree);
    segTree[i] = min(segTree[2 * i + 1], segTree[2 * i + 2]);
}

// * Querying for each Query
int Query(int s, int e, int i, int l, int r, vector<int> &segTree)
{
    // Out of Bound
    if (l > e || s > r)
    {
        return INT_MAX;
    }
    // Inside the range
    if (l >= s && r <= e)
    {
        return segTree[i];
    }
    // Overlapping ranges -> Answer can be in any of the halves
    int mid = l + (r - l) / 2;
    return min(Query(s, e, 2 * i + 1, l, mid, segTree), Query(s, e, 2 * i + 2, mid + 1, r, segTree));
}

int main()
{
    ll n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> segTree(4 * n);
    buildSegmentTree(0, 0, n - 1, arr, segTree);

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        a -= 1;
        b -= 1;
        int ans = Query(a, b, 0, 0, n - 1, segTree);
        cout << ans << endl;
    }
    return 0;
}
