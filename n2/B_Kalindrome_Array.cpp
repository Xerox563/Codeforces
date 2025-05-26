#include <bits/stdc++.h>
using namespace std;
bool isPal(vector<int> &arr)
{
    vector<int> temp = arr;
    reverse(temp.begin(), temp.end());
    return (temp == arr);
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // * Solution Goes Here
        bool flag = false;
        unordered_map<int, int> mp;
        for (auto x : arr)
        {
            mp[x]++;
        }
        int s = 0;
        int e = n - 1;
        while (s <= e)
        {
            if (arr[s] != arr[e])
            {
                if (mp[s] >= mp[e])
                {
                    arr.erase(arr.begin() + s);
                    s++;
                }
                else
                {
                    arr.erase(arr.begin() + e);
                    e--;
                }
            }
            if (isPal(arr))
            {
                flag = true;
                break;
            }
            s++;
            e--;
        }
        // if (mp.size() <= 2)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}