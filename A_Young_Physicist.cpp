#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int x,y,z;
  long long sumx = 0;
  long long sumy = 0;
  long long sumz = 0;
  for(int i=0;i<n;i++) {
      cin>>x>>y>>z;
      sumx+=x;
      sumy+=y;
      sumz+=z;
  }

  if(sumx == 0 && sumy == 0 && sumz == 0) {
    cout<<"YES";
  } else {
    cout<<"NO";
  }


    return 0;
}