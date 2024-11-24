
#include <bits/stdc++.h>
using namespace std;

int input(int n, int arr[])
{
    for (auto i = 0; i < n; i++)
        cin >> arr[i];
};

int subArray(int n, int arr[])
{
    int j = -1;
label1:
    int a = -1;
    j++;
    a=a+j+1;
    // cout<<"a="<<a<<" j="<<j<<endl;
label2:
    a++;
    for (int i = j; i < a; i++)
    {
        cout << arr[i] << " ";
        if (i == a - 1 && a != n)
        {
            cout << endl;
            goto label2;
        }
        if (i == n - 1 && j != n - 1)
        {
            cout << endl;
            goto label1;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    input(n, arr);
    subArray(n, arr);

    return 0;
}