#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tc;
    cin >> tc;

    while (tc--)
    {
        string str;
        cin >> str;
        int n = str.size();

        // Check for adjacent equal characters (excluding '?')
        bool invalid = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] != '?' && str[i] == str[i + 1])
            {
                invalid = true;
                break;
            }
        }

        if (invalid)
        {
            cout << "-1" << endl;
            continue; // Move to the next test case
        }

        // Characters to choose from
        unordered_set<char> st = {'a', 'b', 'c'};

        // Process the string and replace '?'
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '?')
            {
                for (auto c : st)
                {
                    // Ensure no adjacent character is the same
                    if ((i == 0 || c != str[i - 1]) && (i == n - 1 || c != str[i + 1]))
                    {
                        str[i] = c;
                        break; // Replace and stop checking further characters
                    }
                }
            }
        }

        cout << str << endl;
    }
    return 0;
}