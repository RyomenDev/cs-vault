// max of elements goes at last

// order same as input array --> stable

#include <stdio.h>
#include <stdlib.h>

void printarray(int a[], int size)
{
    printf("size :: %d\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubblesort(int a[], int size)
{
    int issorted = 0, count1 = 0, count2 = 0;
    
    for (int i = 0; i < size - 1; i++)
    // for (int i = 0; i < size; i++)
    {
        issorted = 1;
        for (int j = 0; j < size - 1; j++)
        // for (int j = 0; j < size -1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
                issorted = 0;
                count1++;
            }
        }
        count2++;
        if (issorted)
        {
            printf("count1: %d count2: %d \n", count1, count2);
            return;
        }
    }
    printf("count1: %d count2: %d \n", count1, count2);
}

int main()
{
    // int a[]={2,6,8,3,6,1,6,8,4};
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(a) / sizeof(int);
    printf("%d\n", size);

    printarray(a, size);

    bubblesort(a, size);
    printarray(a, size);

    // printf("%d", &x);

    return 0;
}