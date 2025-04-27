#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int time[n];
    for (int i = 0; i < n; i++)
    {
        cin >> time[i];
    }

    int mini = INT_MAX;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[time[i]]++;
    }
    int ele = *min_element(time, time + n);
    int freq = mp[ele];
    if(freq > 1) {
        cout<<"Still Rozdil"<<endl;
    } else {
        for(int i=0;i<n;i++) {
            if(time[i] == ele) {
                cout<<i+1<<endl;
                break;
            }
        }
    }

    return 0;
}