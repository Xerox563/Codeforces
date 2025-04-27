#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    /* n -> no, of childrens.
       x -> maximum allowed weight */
    cin >> n >> x;
    int weight[n];
    for (int i = 0; i < n; i++)
    {
        // Weight of each child..
        cin >> weight[i];
    }

    // Solution part.....
    int cnt = 0;
    sort(weight, weight + n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        if (sum == x)
        {
            cnt++;
            sum = 0;
        }
        else if (sum < x)
        {
            sum += weight[i];
        }
        else
        {
            cnt++;
            sum = weight[i];
            if (sum == x)
            {
                cnt++;
                sum = 0;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
