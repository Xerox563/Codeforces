#include <bits/stdc++.h>
using namespace std;
#define ll long long

// * Function to build the segment tree
void buildSegmentTree(int index, int left, int right, const vector<ll> &arr, vector<ll> &segTree)
{
    if (left == right)
    {
        segTree[index] = arr[left];
        return;
    }
    int mid = left + (right - left) / 2;
    buildSegmentTree(2 * index + 1, left, mid, arr, segTree);
    buildSegmentTree(2 * index + 2, mid + 1, right, arr, segTree);
    segTree[index] = min(segTree[2 * index + 1], segTree[2 * index + 2]);
}

// * Function to update the segment tree
void updateSegmentTree(int index, int left, int right, int pos, ll value, vector<ll> &segTree)
{
    if (left == right)
    {
        segTree[index] = value;
        return;
    }
    int mid = left + (right - left) / 2;
    if (pos <= mid)
    {
        updateSegmentTree(2 * index + 1, left, mid, pos, value, segTree);
    }
    else
    {
        updateSegmentTree(2 * index + 2, mid + 1, right, pos, value, segTree);
    }
    segTree[index] = min(segTree[2 * index + 1], segTree[2 * index + 2]);
}

// * Function to query the sum in the segment tree
ll querySegmentTree(int queryLeft, int queryRight, int index, int left, int right, const vector<ll> &segTree)
{
    // Out of bound case
    if (left > queryRight || right < queryLeft)
    {
        return INT_MAX;
    }
    // Fully inside the range
    if (left >= queryLeft && right <= queryRight)
    {
        return segTree[index];
    }
    // Overlapping case
    int mid = left + (right - left) / 2;
    return min(querySegmentTree(queryLeft, queryRight, 2 * index + 1, left, mid, segTree),
               querySegmentTree(queryLeft, queryRight, 2 * index + 2, mid + 1, right, segTree));
}

int main()
{
    ll n, q;
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
        int type, x, y;
        cin >> type >> x >> y;
        if (type == 1)
        {
            // Update query
            updateSegmentTree(0, 0, n - 1, x - 1, y, segTree);
        }
        else if (type == 2)
        {
            // Sum query
            ll result = querySegmentTree(x - 1, y - 1, 0, 0, n - 1, segTree);
            cout << result << endl;
        }
    }

    return 0;
}
