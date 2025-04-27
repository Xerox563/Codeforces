#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*  pair<int,char> p;
      p = make_pair(2,'b');
      pair<int,char> p2(1,'a');
      cout<<p2.first<<" "<<p2.second<<endl;
      cout<<p.first<<" "<<p.second<<endl;
      return 0;    */
    map<int, int> mp;
    mp.insert({1, 19});
    mp.insert({4, 29});
    mp.insert({6, 17});
    mp.insert({7, 16});

    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
    // auto it = mp.find(4);
    /* auto it1 = mp.find(1);
     auto it2 = mp.find(7);

     cout<<mp.at(1)<<endl;

       mp.erase(it1,it2);
       cout << "_______________" << endl;
       for (auto x : mp)
       {
           cout << x.first << " " << x.second << endl;
       }
       cout<<mp.empty()<<endl;  */

    cout << mp.count(4) << endl;
}
