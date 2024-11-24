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

void bubblesorting(int arr[], int size)
{
    int count = 0;
    //  cout << arr[0] << endl;
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size-j-1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                int swap;
                swap = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = swap;
            }
            count++;
        }
    }
    cout << count << endl;
    // cout << arr[0] << endl;
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

    bubblesorting(arr, n);
    print(arr, n);

    return 0;
}