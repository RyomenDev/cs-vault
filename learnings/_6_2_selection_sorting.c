//https://www.tutorialspoint.com/c-program-for-selection-sort
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

void selectionsort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
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


/*
#include <stdio.h>
int main() {
   int arr[10]={6,12,0,18,11,99,55,45,34,2};
   int n=10;
   int i, j, position, swap;
   for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
   return 0;
}
*/