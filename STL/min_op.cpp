#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool check_max(vector<int> arr, int ele)
{
    int temp = *max_element(arr.begin(), arr.end());
    return (temp == ele);
}
int findlast(vector<int> &nums1, vector<int> &nums2, int n)
{
    int cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (check_max(nums1, nums1[n - 1]) && check_max(nums2, nums2[n - 1]))
        {
            break;
        }
        else
        {
            swap(nums1[i], nums2[i]);
            cnt++;
        }
    }
    if (cnt == n)
    {
        return -1;
    }
    else
    {
        return cnt;
    }
}

int main()
{
    vector<int> nums1 = {1, 1, 8, 9};
    vector<int> nums2 = {1, 7, 1, 1};
    int n = nums1.size();
    cout << findlast(nums1, nums2, n);

    return 0;
}


