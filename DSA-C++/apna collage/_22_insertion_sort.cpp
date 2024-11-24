// sorting --> find the minimum element in unsorted array and swap it with element at begining

// bubble sort

#include <iostream>
using namespace std;

void create(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void insertionsort(int arr[], int size)
{
    int count = 0;
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];  
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
            count++;
        }
        arr[j + 1] = current;
    }
    cout << count << endl;
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    printf("\n");
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    create(arr, n);
    print(arr, n);

    insertionsort(arr, n);
    print(arr, n);

    return 0;
}