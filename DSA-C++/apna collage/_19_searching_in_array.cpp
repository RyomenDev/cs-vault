#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int binarysearch(int arr[], int n, int key)
{
    int s = 0, e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}

int main()
{

    int array[4] = {1, 2, 3, 4};

    cout << array[2] << endl;

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    int key;
    cin >> key;

    cout << linearsearch(arr, n, key) << endl;
    // time complexity  ---> O(n)

    // if sorted
    cout << binarysearch(arr, n, key) << endl;
    // time complexity  ---> log n/log 2

    return 0;
}