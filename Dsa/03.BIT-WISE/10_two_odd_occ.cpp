// two odd appearing numbers (if always 2)
#include <bits/stdc++.h>
using namespace std;

int oddAppearing(int arr[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
        xorSum ^= arr[i];

    // Divide group into parts ::
    int setbit = xorSum & ~(xorSum - 1); // finding right most set bit(1) : 0^1=1
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & setbit)
            x = x ^ arr[i];
        else
            y = y ^ arr[i];
    }

    cout << "(" << x << "," << y << ")" << endl;
    return 0;
}

int main()
{
    int arr[] = {3, 4, 3, 4, 6, 4, 4, 5, 7, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    oddAppearing(arr, n);
    return 0;
}