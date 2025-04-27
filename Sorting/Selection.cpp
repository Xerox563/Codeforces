#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if (arr[mini] > arr[j])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}

void bubbleSort(int arr[], int n)
{

    for (int i = n - 1; i >= 0; i--)
    {
        int flag = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                swap(arr[i], arr[j]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

void insertionSort(int arr[],int n) {
    for(int i=0;i<n;i++) {
        int j= i;
        while(j > 0 && arr[j-1] > arr[j]) {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
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
    //selectionSort(arr, n);
    //bubbleSort(arr, n);
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}