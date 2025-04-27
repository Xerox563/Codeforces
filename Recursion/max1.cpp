#include <bits/stdc++.h>
using namespace std;
int maxi = INT_MIN;
void find_max(int arr[], int i, int n)
{
    // base case
    if (i >= n)
    {
        return;
    }
    // Processing
    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }
    // recursive
    find_max(arr, i + 1, n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    int i = 0;
    find_max(arr, i, n);
    cout << maxi;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int maxi = INT_MIN;
void find_max(int arr[],int n) {
    // base case
    if(n == 0) {
      return;
    }
    // Processing
    if(arr[0] > maxi) {
      maxi = arr[0];
    }
    // recursive
    find_max(arr+1,n-1);
}

int main() {
  int arr[] = {1,2,3,4,5,6};
  int n = 6;

  int i=0;
 find_max(arr,n);
 cout<<maxi;
  return 0;
}*/