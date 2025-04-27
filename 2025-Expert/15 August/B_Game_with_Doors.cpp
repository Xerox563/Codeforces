#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        map<int, int> intervalMap;
        int x1, y1, x2, y2;
        int result = 0;
        cin >> x1 >> y1 >> x2 >> y2;

        if (x2 > y1 || x1 > y2)
        {
            cout << 1 << endl;
            continue;
        }

        if (x2 < x1)
        {
            swap(x1, x2);
            swap(y1, y2);
        }

        for (int i = x1; i <= y1; i++)
        {
            intervalMap[i]++;
        }

        for (int i = x2; i <= y2; i++)
        {
            intervalMap[i]++;
        }

        int left = -1;
        int right = -1;
        for (int i = 1; i <= 100; i++)
        {
            if (intervalMap[i] == 2)
            {
                result++;
                if (left == -1)
                {
                    left = i;
                }
                right = i;
            }
        }
        result--;
        if (min({x1, y1, x2, y2}) < left)
        {
            result++;
        }
        if (max({x1, y1, x2, y2}) > right)
        {
            result++;
        }
        cout << result << endl;
    }

    return 0;
}
