#include <bits/stdc++.h>
using namespace std;
void SelectSort(int *arr, int n)
{
    bool flag = false;
   for(int i=0;i<n;i++) {
    for(int j=0;j<n-i-1;j++) {
        if(arr[j] > arr[j+1]) {
            swap(arr[j],arr[j+1]);
            flag = true;
        }
    }
    if(!flag) {
        break;
    }
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