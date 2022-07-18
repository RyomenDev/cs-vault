// https://www.tutorialspoint.com/explain-the-sorting-techniques-in-c-language

#include <stdio.h>
#include <stdlib.h>

void create(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int bubblesort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // if (arr[j] < arr[i])   //descending
            if (arr[j] > arr[i]) // ascending
            {
                int swap;
                swap = arr[i];
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
    // bubble sorting --> O(n*n)
    int size;
    scanf("%d", &size);
    // int arr = (int*)malloc((size) * sizeof(int)); // length = sizeof(arr) / sizeof(arr[0]);
    int arr[size];

    printf("creating\n");
    create(arr, size);
    display(arr, size);

    printf("bubble sort\n");
    bubblesort(arr, size);
    display(arr, size);

    return 0;
}

/*
#include<stdio.h>
int main(){
   int a[50], i,j,n,t;
   printf("enter the No: of elements in the list:\n");
   scanf("%d", &n);
   printf("enter the elements:\n");
   for(i=0; i<n; i++){
      scanf ("%d", &a[i]);
   }
   printf("Before bubble sorting the elements are:\n");
   for(i=0; i<n; i++)
      printf("%d \t\n", a[i]);
   for (i=0; i<n-1; i++){
      for (j=i+1; j<n; j++){
         if (a[i] > a[j]){
            t = a[i];
            a[i] = a[j];
            a[j] = t;
         }
      }
   }
   printf ("after bubble sorting the elements are:\n");
   for (i=0; i<n; i++)
      printf("%d\t", a[i]);
   return 0;
}
*/