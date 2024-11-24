
// longest arithmetic subarray - array that contains atleast two integers and the differences between consecutive integers are equal
#include <bits/stdc++.h>
using namespace std;

int output(int i, int count, int arr[])
{
    for (auto j = i; j <= count; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
};
int input(int n, int arr[])
{
    for (auto i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // output(0,n,arr);
};

int maxArray(int n, int arr[])
{
    int count = 0, count_ = 0, count2 = 0;
    int z = 0, i = 0, j = 0, w = 0;

    for (i = 0; i < n - 1; i++)
    {
        int j = i;
        count_ = 0;
        // cout << "i=" << i << " j=" << j << endl;
        while ((arr[j + 1] - arr[j]) == (arr[j + 2] - arr[j + 1]))
        {
            count_++;
            // cout << arr[j] << ' ' << arr[j + 1] << ' ' << arr[j + 2] << endl;
            // cout << "count=" << count << " count_=" << count_ << "  z=" << z << "  i=" << i << "  j=" << j << endl;
            j++;
        }
        // cout << "j=" << j << " i=" << i << endl;
        if (count_ > count)
        {
            count = count_;
            z = i;
        }
    }
    // cout << "count=" << count << " count_=" << count_ << "  z=" << z << "  i=" << i << "  j=" << j << endl;
    output(z, z+count + 1, arr);
    // }
    // cout << "w=" << w <<" count2="<<count2<< endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    input(n, arr);
    maxArray(n, arr);

    return 0;
}