// O(2^n)
// sum of subset is equal to given sum

#include <bits/stdc++.h>
using namespace std;

int countSubset(int arr[], int n, int sum)
{
    if (n == 0)
        return (sum == 0) ? 1 : 0;
    return countSubset(arr, n - 1, sum) + countSubset(arr, n - 1, sum - arr[n - 1]);
}

int main()
{
    int arr[] = {10, 12, 13, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countSubset(arr, n, 25) << endl; // 2
    return 0;
}