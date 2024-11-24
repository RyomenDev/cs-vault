#include <bits/stdc++.h>
using namespace std;
#define MAX 1000 // macros
// #include<math.h> //for abs

bool hash_f[MAX + 1][2]; // global all values=0

bool search(int x)
{
    if (x >= 0)
    {
        if (hash_f[x][0] == 1)
            return true;
        else
            return false;
    }
    else
    {
        x = abs(x);
        if (hash_f[x][1] == 1)
            return true;
        else
            return false;
    }
}

void insert(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
            hash_f[arr[i]][0] = 1;
        else
            hash_f[abs(arr[i])][1] = 1;
    }
}

int main()
{
    int arr[] = {-1, 9, 2, -5, 3, 2000};
    int size = sizeof(arr) / sizeof(arr[0]);

    insert(arr, size);
    bool ans = search(2000);
    cout << ans << endl;

    return 0;
}