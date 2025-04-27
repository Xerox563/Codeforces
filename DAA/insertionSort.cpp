#include <bits/stdc++.h>
using namespace std;
void insertSort(int *arr, int n)
{
    int key, j;
    for(int i=0;i<n;i++) {
        key = arr[i];
        j = i;
        while(j > 0 && arr[j-1] > key){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = key;
    }
}
int main()
{
    int arr[] = {5, 4, 6, 2, 8};
    int n = 5;
    insertSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}