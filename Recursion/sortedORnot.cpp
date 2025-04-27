// #include <bits/stdc++.h>
// using namespace std;

// bool find_Sorted(int arr[], int i, int n)
// {
//     // base case
//     if (i == n-1)
//     {
//         return true;
//     }
//     // Processing
//     if (arr[i] > arr[i+1])
//     {
//         return false;
//     }
//     // recursive
//     find_Sorted(arr, i + 1, n);
// }

// int main()
// {
//     int arr[] = {7};
//     int n = 1;

//     int i = 0;
//     bool ans = find_Sorted(arr, i, n);
//     cout << ans;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

bool find_Sorted(int arr[],int n) {
    // base case
    if(n == 0) {
      return true;
    }
    // Processing
    if(arr[0] > arr[1]) {
     return false;
    }
    // recursive
    find_Sorted(arr+1,n-1);
}

int main() {
  int arr[] = {1,893,4,5,6};
  int n = 4;

  int i=0;
 int ans = find_Sorted(arr,n);
 cout<<ans;
  return 0;
}