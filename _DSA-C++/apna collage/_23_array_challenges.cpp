#include <bits/stdc++.h>
using namespace std;

void maxf(int *arr, int size)
{
    int mx = arr[0];
    // int mx = -1999999;
    for (int i = 0; i < size; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void create(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];

    create(arr, size);
    maxf(arr, size);
    return 0;
}