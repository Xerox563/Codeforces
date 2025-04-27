#include <bits/stdc++.h>
using namespace std;
void SelectSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int mini = i;
        int temp = INT_MAX;
        for (int j = i+1; j < n; j++)
        {
           if(arr[j] < arr[mini]) {
           mini= j;
           }
        }
        swap(arr[i],arr[mini]);
    }
}
int main()
{
    int arr[] = {5, 4, 6, 2, 8};
    int n = 5;
    SelectSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}