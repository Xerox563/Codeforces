// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// void solve()
// {
//     string s;
//     cin >> s;
//     if (s.length() < 26)
//     {
//         cout << "-1" << endl;
//     }
//     // char ch = '?';
//     // if (s.find(ch) == string::npos)
//     // {
//     //     cout << "-1" << endl;
//     // }

//     int i = 0;
//     int j = i;
//     bool flag = false;
//     set<char> st;
//     while (i < s.length())
//     {
//         ll cnt = 0;
//         while (st.find(s[j]) == st.end())
//         {
//             if (s[j] == '?')
//             {
//                 cnt++;
//             }
//             // not present
//             st.insert(s[j]);
//             j++;
//         }
//         if (st.size() == 26 || st.size() + cnt == 26)
//         {
//             //
//             flag = true;
//             break;
//         }
//         i = j;
//         st.clear();
//     }
//     if (flag == true)
//     {
//         for (auto x : st)
//         {
//             cout << x;
//         }
//         for (int i = 'a'; i <= 'z'; i++)
//         {
//             if (st.find(i) == st.end())
//             {
//                 cout << i;
//             }
//         }
//     }
//     else
//     {
//         cout << -1 << endl;
//     }
// }

// int main()
// {
//     long long t = 1;
//     // cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

// /*
//  * Nice : If there is a continous substring of length of 26 where each letter of english dictionary appears exactlty once .
//  */
#include <bits/stdc++.h>
using namespace std;

const int ALPHABET_SIZE = 26;

string s;

bool isValid(int counter)
{
    return (counter == ALPHABET_SIZE);
}

void fillQuestionMarks()
{
    for (char &ch : s)
    {
        if (ch == '?')
            ch = 'A';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> s;
    int n = s.length();

    if (n < ALPHABET_SIZE)
    {
        cout << -1;
        return 0;
    }

    int counter = 0;
    vector<int> cnt(ALPHABET_SIZE, 0);

    // Count characters in the first window of size 26
    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        if (s[i] == '?')
        {
            counter++;
        }
        else
        {
            int index = s[i] - 'A';
            if (++cnt[index] == 1)
                counter++;
        }
    }

    if (isValid(counter))
    {
        int cur = 0;
        while (cur < ALPHABET_SIZE && cnt[cur] > 0)
            cur++;
        for (int i = 0; i < ALPHABET_SIZE; i++)
        {
            if (s[i] == '?')
            {
                s[i] = cur + 'A';
                cur++;
                while (cur < ALPHABET_SIZE && cnt[cur] > 0)
                    cur++;
            }
        }
        fillQuestionMarks();
        cout << s;
        return 0;
    }

    // Sliding window for the rest of the string
    for (int i = ALPHABET_SIZE; i < n; i++)
    {
        if (s[i] != '?')
        {
            int index = s[i] - 'A';
            if (++cnt[index] == 1)
                counter++;
        }

        if (s[i - ALPHABET_SIZE] != '?')
        {
            int index = s[i - ALPHABET_SIZE] - 'A';
            if (--cnt[index] == 0)
                counter--;
        }
        else
        {
            counter--;
        }

        if (s[i] == '?')
            counter++;

        if (isValid(counter))
        {
            int cur = 0;
            while (cur < ALPHABET_SIZE && cnt[cur] > 0)
                cur++;
            for (int j = i - ALPHABET_SIZE + 1; j <= i; j++)
            {
                if (s[j] == '?')
                {
                    s[j] = cur + 'A';
                    cur++;
                    while (cur < ALPHABET_SIZE && cnt[cur] > 0)
                        cur++;
                }
            }
            fillQuestionMarks();
            cout << s;
            return 0;
        }
    }

    cout << -1;
    return 0;
}
