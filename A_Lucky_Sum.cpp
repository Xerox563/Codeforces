#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll l,r;
set<ll>s;
ll lucky_num(ll n)
{
    s.insert(n);
    if(n<r)
    {
        lucky_num(n*10+4);
        lucky_num(n*10+7);
    }
}
int main() {
    ll l,r,m,n,x,ans=0;
    cin>>l>>r;
    lucky_num(0);

    while(l<=r)
    {
        ll it=s.lower_bound(1);
    }

    return 0;
}