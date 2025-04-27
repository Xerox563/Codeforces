#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      /*   long long n;
        cin >> n;
        string str;
        cin >> str;
        vector<string> ans;
        int cnt = 0;
        while (cnt < str.length())
        {
            for (int i = 0; i < str.length() - 1; i++)
            {
               ans.push_back(str.substr(i+2,str.length()));
                
            }
            ans.push_back(str);
           
            cnt++;
        }
        int p = 0;
        sort(ans.begin(), ans.end());
        for (int i = 1; i < ans.size(); i++)
        {
            if (ans[i] != ans[i - 1])
            {
                p++;
            }
        }
        cout << p << endl;  */
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = n-1;  // for n sized string total n-1 possible pairs availbale..
        int extra = 0;
        for(int i=0;i<n-2;i++) {
            if(s[i] == s[i+2]) {
                extra++;
            }
        }
        cout<<ans-extra<<endl;
    }
    return 0;
}