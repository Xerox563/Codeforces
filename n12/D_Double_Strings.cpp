#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<string> arr;
        unordered_map<string, int> mp;

        // Read the input strings and store them in the map
        for (int i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            arr.push_back(x);
            mp[x]++;
        }

        string ans = "";

        // Traverse each string in the array
        for (int i = 0; i < n; i++)
        {
            string str = arr[i];
            bool flag = false;

                       for (int j = 1; j < str.length(); j++)
            {
                string fp = str.substr(0, j); // First part (from 0 to j-1)
                string sp = str.substr(j);    // Second part (from j to end)

                // Check if both the first part and second part exist in the map
                if (mp.count(fp) && mp.count(sp))
                {
                    flag = true;
                    break; // No need to check further if a match is found
                }
            }

            // Append '1' if the string can be split, otherwise '0'
            if (flag == false)
            {
                ans += '0';
            }
            else
            {
                ans += '1';
            }
        }

        cout << ans << endl;
    }

    return 0;
}
