#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    // solution....
    int len = 1;
    int maxLen = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            len++;
            if(len > maxLen) {
                maxLen = len;
            }
        }
        else
        {
          len = 1;
        }
    }
   
    cout << maxLen << endl;

    return 0;
}