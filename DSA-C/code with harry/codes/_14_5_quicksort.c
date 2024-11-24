// quick_sort

#include <stdio.h>
#include <stdlib.h>

void printarray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    // printf("swap\n");
    // printf("%d %d\n", *a, *b);
    int swap1;
    swap1 = *a;
    *a = *b;
    *b = swap1;
    // printf("%d %d\n", *a, *b);
}

int partition(int a[], int plow, int phigh)
{
    int pivot = a[plow];
    int i = plow + 1;
    int j = phigh;
    int temp;
    do
    {
        while (a[i] < pivot)
        // while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);
     swap(&a[plow], &a[j]);
    // temp = a[plow];
    // a[plow] = a[j];
    // a[j] = temp;
    return j;
}

void quicksort(int a[], int low, int high)
{
    int partitionindex; // index of pivot after partition

    if (low < high)
    {
        partitionindex = partition(a, low, high);
        printarray(a,high+1);
        quicksort(a, low, partitionindex - 1);  // sort left subarray
        quicksort(a, partitionindex + 1, high); // sort right subarray
    }
}

int main()
{
    int a[] = {3, 5, 2, 13, 12};
    // int a[] = {2, 30, 12, 54, 65, 7, 23, 9};
    int size = sizeof(a) / sizeof(int);
    printf("%d\n", size);
    printarray(a, size);

    quicksort(a, 0, size - 1);
    printarray(a, size);

    return 0;
}

/*
printf("%d %d\n", *a, *b);
{
    printf("quicksort\n");
    int high, pivot, end, count1 = 0, count2 = 0;
    for (int low = 1; low < size; low++)
    {
        high = size - 1;
        pivot = low - 1;
        printf("for:: low=%d a[low]=%d a[high]=%d pivot=%d \n", low, a[low], a[high], pivot);
        // end = size - 1;
        // while (pivot < a[low] && low <= high)
        while (low <= high)
        {
            // printf("while\n");
            if (a[low] > pivot) // samller
                swap(&a[low], &a[pivot]);
            else if (a[high] < pivot) // bigger
                swap(&a[pivot], &a[high]);
            high--;
            count1++;
            printarray(a, size);
        }
        count2++;
    }

    printf("count1: %d count2: %d \n", count1, count2);
}
*/