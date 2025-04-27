#include <bits/stdc++.h>
using namespace std;
int solve(long long n)
{
    int cnt = 0;
    // if (n >= 100)
    // {
    //     cnt += n / 100;
    //     n = n % 100;
    //     if (n == 0)
    //     {
    //         return cnt;
    //     }
    //     else if (n >= 20)
    //     {
    //         cnt += n / 20;
    //         n = n % 20;
    //         if (n == 0)
    //         {
    //             return cnt;
    //         }
    //         else if (n >= 10)
    //         {
    //             cnt += n / 10;
    //             n = n % 10;
    //             if (n == 0)
    //             {
    //                 return cnt;
    //             }
    //             else if (n >= 5)
    //             {
    //                 cnt += n / 5;
    //                 n = n % 5;
    //                 if (n == 0)
    //                 {
    //                     return cnt;
    //                 }
    //                 else if (n >= 1)
    //                 {
    //                     cnt += n / 1;
    //                     n = n % 1;
    //                     if (n == 0)
    //                     {
    //                         return cnt;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    /* if(n > 100) {
        cnt+=n/100;
        n%=100;
        if(n > 20) {
            cnt+=n/20;
            n%=20;
        }
        if(n > 10) {
            cnt+=n/20;
            n%=20;
        }
        if(n > 5) {
            cnt+=n/20;
            n%=20;
        } else {
            cnt+=n;
        }
    } */
    return cnt;
}
int main()
{
    long long n;
    cin >> n;

    // cout << solve(n);
    int cnt = 0;
    int notes[5] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; i++)
    {
        cnt += n / notes[i];
        n = n % notes[i];
    }
    cout << cnt;
}