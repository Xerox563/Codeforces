#include <bits/stdc++.h>
using namespace std;
bool solve(int n, string str, string t)
{
    if(str == t) {
        return true;
    }
    int i = 0;
    int j = n-1;
    while(i < j) {
        if(str[i] == t[i]) {
            i++;
        }else {
            if(t[i] == str[j]) {
                swap(str[i],str[j]);
                i++;
                j--;
            } else {
                j--;
            }
        }
    }
}
int main()
{
    long long q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string t;
        cin >> t;

        // Proceeding to the solution part..
        if (solve(n, s, t))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}