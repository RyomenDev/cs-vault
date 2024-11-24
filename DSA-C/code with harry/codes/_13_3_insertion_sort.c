// intermediate results not usefull.
// adaptive by nature.
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

void insertionsort(int a[], int size)
{
  int j, key, count1 = 0, count2 = 0;
  for (int i = 1; i < size; i++)
  {
    key = a[i];
    j = i - 1;
    while (j >= 0 && a[j] < key)
    {
      a[j + 1] = a[j];
      j--;
      count1++;
    }
    a[j + 1] = key;
  }
  count2++;

  printf("count1: %d count2: %d \n", count1, count2);
}

int main()
{
  // int a[]={2,6,8,3,6,1,6,8,4};
  int a[] = {2, 30, 12, 54, 65, 7, 23, 9};
  int size = sizeof(a) / sizeof(int);
  printf("%d\n", size);

  printarray(a, size);

  insertionsort(a, size);
  printarray(a, size);

  // printf("%d", &x);

  return 0;
}