#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    string str;
    cin >> str; // string s of length n.
    int l, r;
    char c1, c2;
    string s = str;
    for (int i = 0; i < m; i++)
    {
        cin>>l>>r>>c1>>c2;
        for(int j=l;j<=r;j++) {
           if(s[j-1] == c1) {
            s[j-1] = c2;
           }
        }
    }
    cout<<s<<endl;


    return 0;
}