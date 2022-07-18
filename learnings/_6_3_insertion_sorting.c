//https://www.tutorialspoint.com/explain-the-insertion-sort-by-using-c-language
#include <stdio.h>
#include <stdlib.h>

// insertion sorting
void create(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void insertionsorting(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
            if (arr[j] > arr[j - 1])
            {
                break;
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

    printf("insertion sort\n");
    insertionsorting(arr, size);
    display(arr, size);

    return 0;
}


/*
#include<stdio.h>
int main() {
   int a[50], i,j,n,t;
   printf("enter the No: of elements in the list:\n");
   scanf("%d", &n);
   printf("enter the elements:\n");
   for(i=0; i<n; i++){
      scanf ("%d", &a[i]);
   }
   for(i = 1; i <= n - 1; i++){
      for(j=i; j > 0 && a[j - 1] > a[j]; j--){
         t = a[j];
         a[j] = a[j - 1];
         a[j - 1] = t;
      }
   }
   printf ("after insertion sorting the elements are:\n");
   for (i=0; i<n; i++)
   printf("%d\t", a[i]);
   return 0;
}
*/