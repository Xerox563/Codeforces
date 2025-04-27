#include <bits/stdc++.h>
using namespace std;
bool hasDistinctDigits(int year)
{
    unordered_set<int> st;
    while (year > 0)
    {
        int temp = year % 10;
        // Store them in the set
        st.insert(temp);
        year /= 10;
    }
    if (st.size() == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    /* long long year;
      cin >> year;
      long long cnt_dig = 0;
      unordered_set<int> st;
      while (year > 0)
      {
          int temp = year % 10;
          // Store them in the set
          year /= 10;
          cnt_dig++;
      }

      long long ans = 0;
      long long yeary = year + 1;
      // take all the digits from the number..
      while(true) {
      while (yeary > 0)
      {
          int temp = yeary % 10;
          // Store them in the set
          st.insert(temp);
          yeary /= 10;
          if (st.size() == 4)
          {
              ans = yeary;
              break;
          }
          else
          {
              // increement the year
              yeary++;
          }
      }
  }

      cout << ans;   */
    int year;
    cin >> year;
    while (true)
    {
        year++;
        if (hasDistinctDigits(year))
        {
            cout << year << endl;
            break;
        }
    }
    return 0;
}