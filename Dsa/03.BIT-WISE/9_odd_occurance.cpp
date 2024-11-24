// find the only odd occurring number
// Missing number

#include <bits/stdc++.h>
using namespace std;

// find odd number
bool check(int n)
{
    return (1 & n); // off
}

int checkOddOccurrence(int arr[], int n)
{
    if (check(arr[n]))
        return arr[n];
    checkOddOccurrence(arr, n - 1);
}

/*
x^0=x
x^y=y^x
x^(y^z)=(x^y)^z
x^x=0
*/

// only odd occurring number
int oddOccurring(int arr[], int n)
{
    // int res = 0;
    // for (int i = 0; i < n; i++)
    //     res ^= arr[i];
    // return res;

    if (n < 0)
        return 0;
    return arr[n] ^ oddOccurring(arr, n - 1);
}

int totalXor(int arr[], int n)
{
    if (n == 0)
        return 0;
    return (n + 1) ^ arr[n];
}

int missingNumber(int arr[], int n)
{
    int res1 = 0, res2 = 0;
    res2 = totalXor(arr, n);
    for (int i = 0; i < n; i++)
        res1 ^= arr[i];

    return res2 - res1;
}

int main()
{
    int arr[9] = {4, 8, 8, 3, 6, 5, 4, 6, 3};
    int arr1[5] = {1, 2, 5, 4, 3};
    int arr2[5] = {1, 6, 3, 5, 2};

    cout << checkOddOccurrence(arr, 9) << endl;
    cout << oddOccurring(arr, 9 - 1) << endl;

    cout << missingNumber(arr2, 5) << endl;

    return 0;
}