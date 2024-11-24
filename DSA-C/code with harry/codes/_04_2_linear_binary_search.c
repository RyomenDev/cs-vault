#include <stdio.h>
#include <stdlib.h>

int linersearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)

            return i;
    }
    return -1;
}

int binarysearch(int arr[], int size, int element)
{
    int low = 0, mid, high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
            return mid;
        if (arr[mid] < element)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{

    // int arr[] = {1, 3, 4, 6, 56, 23, 66, 3};
    // int size = sizeof(arr) / sizeof(int);
    // linear search is for unsorted arrays
    //  int result = linersearch(arr, size, 6);
    //  printf("index is %d\n", result);

    // binary search is for sorted arrays
    int arr[] = {1, 2, 3, 4, 6, 7, 9, 11, 23, 35};
    int size = sizeof(arr) / sizeof(int);
    int result = binarysearch(arr, size, 35);
    printf("index is %d\n", result);
    return 0;
}