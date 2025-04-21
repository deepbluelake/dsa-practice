#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (target > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// LOWER_BOUND ITERATIVE
int lb(int arr[], int n, int x)
{
    int ans = n;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

// LOWER_BOUND RECURSIVE
int lowerB(int arr[], int low, int high, int target)
{
    int ans = high + 1;
    int mid = (low + high) / 2;
    if (low > high)
        return high + 1;
    else
    {

        if (arr[mid] >= target)
        {
            ans = mid;
            return lowerB(arr, low, mid - 1, target);
        }
        else
            return lowerB(arr, mid + 1, high, target);
    }
}

// LOWER_BOUND STL

int lb(int arr[], int n, int x)
{
    int lb = lower_bound(arr + 0, arr + n, x) - arr;
    cout << lb;
}

// FIRST AND LAST OCCURENCE
// pair<int, int> firstAndLastPosition(vector<int> arr, int n, int x)
// {
//     int lb = lowerBound(arr, n, x);
//     if (lb == n || arr[lb] != x)
//         return {-1, -1};
//     return {lb, upperBound(arr, n, x) - 1};
// }

int firstOccurence(const vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    int fo = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            fo = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return fo;
}

int lastOccurence(const vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    int lo = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            lo = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return lo;
}

// number of occurences for sorted arrays
int occurences(int arr[], int n, int x)
{
}

int findMin(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] < arr[high])
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return arr[low];
}

// LC33
int findEl2(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == x)
            return mid;

        // if the left part is sorted
        if (arr[low] <= arr[mid])
        {
            // either it lies on the last part or not
            if (x >= arr[low] && x <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        // or the right part is sorted
        else
        {
            // either it lies on the right part or not
            if (x >= arr[mid] && x <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int lengthSubarray(int arr[], int x)
{
    int left = 0, right = 0, sum = 0;
    while (sum <= x)
    {
        for (int i = left; i <= right; i++)
        {
            sum += arr[i];
        }
        right++;
    }
    while (sum <= x)
    {
        left++;
    }
    return right - left + 1;
}

int findMin(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1;
    int ans = INT_MAX;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[low] <= arr[mid])
        { // Left side is sorted
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else
        { // Right side is sorted
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }
    return ans;
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

    cout << findMin(arr, n) << endl;
}

// 6917
