#include <bits/stdc++.h>
using namespace std;
void calculate()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }
    long long temp = n - 1;
    long long y = true;
    set<long long> st;
    for (int i = 0; i < k; i++)
    {
        if (st.count(temp))
        {
            break;
        }
        if (v[temp] > n)
        {
            y = false;
            break;
        }
        st.insert(temp);
        temp = (temp - v[temp] + n) % n;
    }
    if (y)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        calculate();
    }
    return 0;
    return 0;
}