#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n; // Board size (not used but typically provided in problems)

    int ax, ay;
    cin >> ax >> ay; // Queen's position

    int bx, by;
    cin >> bx >> by; // First blocking point

    int cx, cy;
    cin >> cx >> cy; // Second blocking point

    // Check if both blocking points are on the same side relative to the queen
    if (((bx < ax) == (cx < ax)) && ((by < ay) == (cy < ay)))
    {
        // Both points are on the same side; queen is blocked
        cout << "YES" << endl;
    }
    else
    {
        // Blocking points are on opposite sides; queen is not blocked
        cout << "NO" << endl;
    }

    return 0;
}
