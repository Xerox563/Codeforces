#include <iostream>
#define MAXN 200005

int n, a[MAXN], b[MAXN]; // Array 'a' stores elements, 'b' tracks last update index
long long sum = 0;       // Total sum of elements

int main()
{
    int q;
    std::cin >> n >> q;

    // Read initial values and compute the initial sum
    for (int i = 1; i <= n; ++i)
    {
        std::cin >> a[i];
        sum += a[i];
    }

    int flag = 0; // The query index when all elements were last updated
    int now = 0;  // The value to which all elements were last set

    for (int i = 1; i <= q; ++i)
    {
        int op, x, y;
        std::cin >> op;
        if (op == 1)
        {
            std::cin >> x >> y;
            if (b[x] < flag)
            {
                sum -= now; // Previous global value was set
            }
            else
            {
                sum -= a[x]; // Subtract the old value
            }
            a[x] = y; // Update the element
            sum += y; // Add the new value
            b[x] = i; // Record the update index
        }
        else if (op == 2)
        {
            std::cin >> x;
            sum = (long long)x * n; // Set all elements to new value
            flag = i;               // Update the last global update index
            now = x;                // Record the new global value
        }
        std::cout << sum << '\n'; // Output the current sum
    }

    return 0;
}
