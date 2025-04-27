#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    if (s > e)
    {
        return -1;
    }
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        binarySearch(arr, s, mid - 1, key);
    }
    else
    {
        binarySearch(arr, mid + 1, e, key);
    }
}
int main()
{
    int arr[] = {2, 4, 5, 6, 7, 8, 9};
    int s = 0;
    int e = 7;
    int key = 2;
    int ans = binarySearch(arr, s, e, key);
    cout << ans << endl;
    return 0;
}