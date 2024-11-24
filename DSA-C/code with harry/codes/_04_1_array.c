#include <stdio.h>
#include <stdlib.h>

void display(int ar[], int n)
// traversal
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ar[i]);
    }
    printf("\n");
}

int insertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int deletion(int arr[], int size, int index)
{
    if (index >= size)
    {
        return -1;
    }
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    return 1;
}

int main()
{
    int arr[100] = {1, 2, 3, 4};
    int size = 4;
    printf("size = %d\n", size);
    display(arr, size);
    int element = 7, capacity = 100, index = 1;
    // insertion(arr, size, element, capacity, index);
    // size ++;
    deletion(arr, size, index);
    size--;
    printf("size = %d\n", size);
    display(arr, size);

    return 0;
}