#include <bits/stdc++.h>
using namespace std;
int main()
{
    int child[6] = {1, 2, 3, 4, 5, 6};
    vector<int> v;
    v.insert(v.begin(), child, child + 6);
    // vector<int> v(arr,arr+n);
    // v.assign(arr,arr+n)
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    int rot_l = 1;
    // rotate-Left -> rotate(v.begin(), v.begin() + rot_l, v.end());
    // rotate-right ->  rotate(v.begin(), v.begin() + v.size() - rot_l, v.end());
    auto it = find(v.begin(), v.end(), 3);
    v.erase(it);
    for (auto x : v)
    {
        cout << x << " ";
    }
}