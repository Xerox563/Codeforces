#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; // read the number of test cases
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k; // read n and k
        bool ys = 0;   // bool value if true then there exists a subsegment which satisfies the condition, else it doesn't exist
        for (int i = 0; i < n; i++)
        {
            int a; // read the i-th element of the array
            cin >> a;
            if (a == k)
                ys = 1; // if the element is equal to k, then the subsegment [i, i] has the most common element equal to k
        }
        if (ys)
            cout << "YES\n"; // output the answer
        else
            cout << "NO\n";
    }
}