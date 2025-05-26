#include <bits/stdc++.h>
using namespace std;

// * Binary Search Implementation

int search(vector<int> &arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
}

// *First & Last Occurance of x
vector<int> arr = {7, 6, 5, 4, 3, 2, 1};
int n = arr.size();

int Last_Occur(vector<int> &arr, int n, int x)
{
    int ans1 = -1;
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) >> 1;
        if (arr[mid] == x)
        {
            ans1 = mid;
            s = mid + 1;
        }
        else if (arr[mid] < x)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans1;
}

int Fast_Occur(vector<int> &arr, int n, int x)
{
    int ans2 = -1;
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) >> 1;
        if (arr[mid] == x)
        {
            ans2 = mid;
            e = mid - 1;
        }
        else if (arr[mid] < x)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans2;
}

// Occurances of number -> (ans1-ans2 + 1)

// * Search in Sorted Sorted Array

int Search_Rotated(vector<int> &arr, int n, int x)
{
    int ans = -1;
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + ((e - s) >> 1);

        if (arr[mid] == x)
        {
            return true;
        }

        if (arr[s] == arr[mid] && arr[mid] == arr[e])
        {
            s++;
            e--;
            continue;
        }

        // Identify the Sorted Halves
        if (arr[mid] >= arr[s])
        {
            // Left Sorted
            if (x <= arr[mid] && x >= arr[s])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else if (arr[mid] <= arr[e])
        {
            // Right Sorted
            if (x >= arr[mid] && x <= arr[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}

// * Koko Eating Bananas
vector<int> arr = {7, 15, 6, 3};
int n = 4;
int h = 8;

bool isPossible(int time, vector<int> &arr, int final)
{
    int temp = 0;
    for (auto &x : arr)
    {
        temp += ceil((double)(x) / (double)(time));
    }
    return temp <= final;
}
int Koko_Eating(vector<int> &arr, int n, int h)
{
    int s = 1;
    int e = *max_element(arr.begin(), arr.end());
    while (s <= e)
    {
        int mid = s + ((e - s) >> 1); // no. of bananas eaten per hour
        if (isPossible(mid, arr, h) == true)
        {
            // minimize time
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
