// not stable
// not adaptive
// sorting in minimum number of swaps -> n-1

#include <stdio.h>
#include <stdlib.h>

// selection sorting

void create(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void selectionsort(int *arr, int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            // if (arr[i] < arr[j]) // descending
            if (arr[i] > arr[j])  // ascending
            {
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int size;
    scanf("%d", &size);

    int arr[size];

    printf("creating\n");
    create(arr, size);
    display(arr, size);

    printf("selection sort\n");
    selectionsort(arr, size);
    display(arr, size);

    return 0;
}