#include <iostream>
#include <vector>
#include <numeric> // For std::accumulate

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> k(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> k[i];
        }

        // Initialize a solution as an array of ones
        vector<long long> bets(n, 1);
        bool possible = true;

        for (int i = 0; i < n; ++i)
        {
            long long sum_other_bets = accumulate(bets.begin(), bets.end(), 0LL) - bets[i];
            if (sum_other_bets >= (k[i] - 1) * bets[i])
            {
                possible = false;
                break;
            }
        }

        if (!possible)
        {
            // Try increasing bets if initial simple bet strategy fails
            possible = true;
            long long multiplier = 1;
            while (multiplier <= 1000000000 && !possible)
            {
                ++multiplier;
                for (int i = 0; i < n; ++i)
                {
                    bets[i] = multiplier;
                }

                possible = true;
                for (int i = 0; i < n; ++i)
                {
                    long long sum_other_bets = accumulate(bets.begin(), bets.end(), 0LL) - bets[i];
                    if (sum_other_bets >= (k[i] - 1) * bets[i])
                    {
                        possible = false;
                        break;
                    }
                }
            }
        }

        if (possible)
        {
            for (int i = 0; i < n; ++i)
            {
                cout << bets[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
