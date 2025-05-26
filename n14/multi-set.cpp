/*
 * Inserting , Deleting and Searching -> O(logn);
 * Implemented using Balanced BST (Red Black Trees)
 * Can be iterated both forward and backward
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms = {1, 2, 3, 4, 5, 5, 5, 6};

    // * displaying
    for (auto x : ms)
    {
        cout << x << " ";
    }
    cout << endl;

    // * Inserting
    ms.insert(2);
    ms.insert(3);
    ms.insert(6);
    ms.insert(7);

    // * Occurance of x
    cout << "Occurance of 3 : " << ms.count(3) << endl;
    cout << "Occurance of 4 : " << ms.count(4) << endl;

    // * Find an element
    auto it = ms.find(4);
    if (it != ms.end())
    {
        cout << "Element found !!" << endl;
    }

    // * Erase -> Erases only one instance at a time
    ms.erase(ms.find(6));

    // * displaying
    for (auto x : ms)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "Size : " << ms.size() << endl;

    // * lower_bound -> Returns an iterator to the first element that is not less than x
    // * the first element that is greater than or equal to x
    auto lower = ms.lower_bound(2);
    if (lower != ms.end())
    {
        cout << "Lower found at : " << *lower << endl;
    }

    // * upper_bound -> Returns an iterator to the first element that is greater than x.
    auto upper = ms.upper_bound(3);
    if (upper != ms.end())
    {
        cout << "Upper found at : " << *upper << endl;
    }
    return 0;
}