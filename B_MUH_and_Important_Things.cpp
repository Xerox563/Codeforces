#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // Storing the element with its current index..
    vector<pair<int, int>> temp;
    for (int i = 0; i < n; i++)
    {
        temp.push_back(make_pair(v[i], i + 1));
    }

    sort(temp.begin(), temp.end());
    vector<int> ans;
    for (pair<int, int> x : temp)
    {
        ans.push_back(x.second);
    }
    for (int i = 0; i < temp.size(); i++)
    {
        if (temp[i].first == temp[i + 1].first)
        {
            swap(temp[i], temp[i + 1]);
        }
    }
    ans.push_back(temp[i].second);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}