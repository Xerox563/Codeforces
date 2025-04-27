#include <bits/stdc++.h>
using namespace std;
struct Interval
{
    int st;
    int et;
};
bool compare(Interval i1, Interval i2)
{
    return i1.st > i2.st;
}
void print(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arrr = {1,2,2,3,3,4,5,5,6,7};
    int arr[] = {1,2,2,3,3,4,5,5,6,7};

   /* vector<int> v = {1, 7, 4, 9, 7, 6, 3};
     sort(arr, arr + 7);
       Interval arr[5] = {{6, 4}, {3, 2}, {4, 6}, {8, 13}, {9, 7}};

       sort(arr,arr+5,greater<int>());
      sort(arr, arr + 5, compare);

       for (int i = 0; i < 5; i++)
       {
           cout << arr[i].st << " "<<arr[i].et<<endl;
       }
      cout << binary_search(arr, arr + 7, 99);

     cout << "Lower Bound :" << lower_bound(arr, arr + 7, 1) - arr << endl;
     cout << "Upper Bound :" << upper_bound(arr, arr + 7, 7) - arr << endl;
     cout << "GCD of (4,6) :" << __gcd(4, 6) << endl;   
     cout<<"Count of 7 : "<<count(v.begin(),v.end(),7)<<endl;
    if (find(v.begin(),v.end() ,77) != v.end())
    {
        cout << "Found" << endl;
    }
    else
    {

        cout << "Not Found" << endl;
    }    */

    // arr.erase(find(arr.begin(),arr.end(),3));
    if(find(arr,arr + 10,31) != arr + 10) {
        cout<<"Found"<<endl;
    } else {
        cout<<"Not Found"<<endl;
    }
   // arr.erase(unique(arr.begin(),arr.end()),arr.end());
    // print(arr);

}
