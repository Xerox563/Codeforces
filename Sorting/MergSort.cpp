#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int low, int mid, int high, int n)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Elements still left
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void mergeSort(int arr[], int low, int high, int n)
{
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid, n);
    mergeSort(arr, mid + 1, high, n);
    merge(arr, low, mid, high, n);
}
void MergeSortAlgo(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    mergeSort(arr, low, high, n);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    MergeSortAlgo(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}