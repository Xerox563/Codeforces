#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, k;
    cin >> k >> n;
    string lucky[k];
    string main[n];
    // inputing k-lucky strings
    for (int i = 0; i < k; i++)
    {
        cin >> lucky[i];
    }
    // inputing n-main strings
    for (int i = 0; i < n; i++)
    {
        cin >> main[i];
    }
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < k; j++)
        {
            if (main[i].find(lucky[j]) != string::npos)
            {
                cout << "Good" << endl;
                c = 1;
                break;
            }
        }
        if (c == 0)
        {
            if (main[i].length() >= 47)
            {
                cout << "Good" << endl;
            }
            else
            {
                cout << "Bad" << endl;
            }
        }
    }

    return 0;
}

