
// maximum subarray sum
// cumulative sum approach

// max of subarray

#include <bits/stdc++.h>
// #include <stdlib.h>
using namespace std;

int input(int n, int arr[])
{
    for (auto i = 0; i < n; i++)
        cin >> arr[i];
};

int subArray(int n, int arr[])
{
    int currSum[n+1];
    currSum[0]=0;
    for (auto i = 1; i <= n; i++)
        currSum[i]=currSum[i-1]+arr[i-1];
    for (auto i = 1; i <= n; i++)
        cout<<currSum[i]<<" ";
    cout<<endl;

}
//10:00
int main()
{
    int n;
    cin >> n;
    int arr[n];

    input(n, arr);
    subArray(n, arr);

    return 0;
}