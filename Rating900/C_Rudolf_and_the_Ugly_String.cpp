#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        // cin >> n;
        string str;
        cin >> n >> str;
        int ans = 0;
        for (int i = 0; i <n-2; i++)
        {
          string t = str.substr(i,3);
          if(t == "pie" || t == "map") {
            i+=2;
            ans++;
          }
        }
        cout << ans << endl;
    }

    return 0;
}