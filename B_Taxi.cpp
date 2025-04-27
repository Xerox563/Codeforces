#include <bits/stdc++.h>
using namespace std;
int solve(long long n, vector<int> v)
{
    /* sort(v.begin(),v.end());
     int i=0;
     int j= n-1;
     int cnt = 0;
     while(i <= j) {
       int sum = v[i] + v[j];
       if(sum > 4) {
           cnt++;
           j--;
       } else if(sum == 4) {
           cnt++;
           i++;
           j--;
       } else {
           sum+=v[i];
           i++;
       }
     }
     return cnt;  */
    int ones, twos, threes, fours;
    ones = twos = threes = fours = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            ones++;
        }
        else if (v[i] == 2)
        {
            twos++;
        }
        else if (v[i] == 3)
        {
            threes++;
        }
        else
        {
            fours++;
        }
    }

    int ans = 0;
    ans+=fours;
    if(threes > 0) {
        ans+=threes;
        ones-=threes;
    }
    if(ones > 0) {
        ans+=ones;
    }
    if(twos > 0) {
        if(twos%2 == 0) {
            ans+=(twos/2);
        } else {
            ans+= 1+(twos/2);
        }
    }
    return ans;
}
int main()
{
    long long n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << solve(n, v);
    return 0;
}