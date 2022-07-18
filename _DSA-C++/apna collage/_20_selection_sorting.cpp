// sorting --> find the minimum element in unsorted array and swap it with element at begining

// selection sort

#include <iostream>
using namespace std;

void create(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void linearsorting(int arr[], int size)
{
    int count=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
            count++;
        }
    }
    cout<<count<<endl;
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
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

    linearsorting(arr, n);
    print(arr, n);

    return 0;
}