#include <stdio.h>
#include <stdlib.h>

int search(int x, int arr[], int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    // linear searching
    int length = 0;
    int arr[] = {1, 2, 3, 4, 4, 2, 4, 5, 3, 5, 5, 32, 3, 4};
    length = sizeof(arr) / sizeof(arr[0]);

    // printf("%d",length);

    printf("%d", search(5, arr, length));

    return 0;
}