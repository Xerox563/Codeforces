#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // finding min and max element

    int mini_index = INT_MAX;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini_index = i;
            mini = arr[i];
        }
    }
    int cnt = 0;
    // Moving min to the last index
    int j = mini_index;
    while (j < n)
    {
        swap(arr[j], arr[j + 1]);
        j++;
        cnt++;
    }

    int maxi = INT_MIN;
    int maxi_index = INT_MIN;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            maxi_index = i;
            maxi = arr[i];
        }
    }

    // Moving max to the 0th index
    int i = maxi_index;
    while (i > 0)
    {
        swap(arr[i], arr[i - 1]);
        i--;
        cnt++;
    }

    cout << cnt - 2;
}