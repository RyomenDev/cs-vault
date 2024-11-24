/*
it requires the array to be sorted before search is applied
binary_search(startaddress,endaddress,valuetofind)
return true / false
*/
#include <bits/stdc++.h>
// #include<algorithm>
using namespace std;

void show(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {2, 3, 0, 9, 5, 6, 8, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + size);
    show(arr, size);

    binary_search(arr, arr + size, 5) ? cout<<"found\n" : cout<<"not found\n";

    return 0;
}