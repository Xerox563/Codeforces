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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int sum = 0;
        for (auto x : v)
        {
            sum += x;
        }

        // Solution Goes Here
        /*
         * each element Belongs to exactly single segment.
         * sum of all segements are equal.
         * calculate minimum thickness (thickness -> length of longest segment)
         */
        int temp = 0, mini = n, count = 0;
        for (int i = 0; i < n; i++)
        {
            temp += v[i];
            count++;
            int temp_maxo = 0;
            if (sum % temp == 0)
            {
                temp_maxo = count;
                int temp_sum = 0, temp_count = 0;
                for (int j = i + 1; j < n; j++)
                {
                    temp_sum += v[j];
                    temp_count++;
                    if (temp_sum == temp)
                    {
                        temp_maxo = max(temp_maxo, temp_count);
                        temp_sum = 0;
                        temp_count = 0;
                    }
                }
                if (temp_sum == 0)
                {
                    mini = min(mini, temp_maxo);
                }
                // cout<<"temp_maxo is "<<temp_maxo<<endl;
            }
        }
        cout << mini << endl;
    }

    return 0;
}

/* -----------------END OF PROGRAM --------------------*/
/*
 * stuff you should look before submission
 * constraint and time limit
 * int overflow
 * special test case (n=0||n=1||n=2)
 * don't get stuck on one approach if you get wrong answer
 */

// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph