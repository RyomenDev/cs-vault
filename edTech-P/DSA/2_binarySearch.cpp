// binary search
#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int l, int r, int x)
{
    if (r < l)
    {
        return -1;
    }

    int mid = l + (r - l) / 2;
    if (arr[mid] == x)
    {
        return mid;
    }
    if (arr[mid] > x)
        return binary_search(arr, l, mid - 1, x);
    return binary_search(arr, mid + 1, r, x);
}

int main()
{

    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binary_search(arr, 0,n-1, x);
    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index " << result;

    return 0;
}