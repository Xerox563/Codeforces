#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    unordered_set<int> st;
    // Levels that X can pass..
    int p;
    cin >> p;
    for (int i = 1; i <= p; i++)
    {
        int k;
        cin >> k;
        st.insert(k);
    }
    // Levels that Y can pass..
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int k2;
        cin >>k2;
        st.insert(k2);
    }

   
    // Proceeding to the Solution..
    /* unordered_map<int, bool> mp;
     for (int i = 1; i <= n; i++)
     {
         mp.insert({i, false});
     }

     for (int i = 1; i <= p; i++)
     {
         if (mp.find(x[i]) != mp.end())
         {
             mp.erase(i);
         }
     }
     for (int i = 1; i <= q; i++)
     {
         if (mp.find(y[i]) != mp.end())
         {
             mp.erase(i);
         }
     }  */
     if (st.size() == n)
     {
         cout << "I become the guy." << endl;
     }
     else
     {
         cout << "Oh, my keyboard!" << endl;
     }
    
}