/*
#include <bits/stdc++.h>
using namespace std;

int input(int n,int arr[])
{
    for (auto i = 0; i < n; i++)
        cin >> arr[i];
};

int max_(int n,int arr[]){
    int maxNum=INT_MIN;
    cout<<maxNum<<endl;
    for (auto i = 0; i < n; i++)
    {
        if(maxNum<arr[i])
            maxNum=arr[i];
    }
    cout<<maxNum<<endl;
}

int main()
{
    // int n;
    // cin >> n;
    // int arr[n];

    int m0=INT_MAX;
    int m1=INT16_MAX;
    int m2=INT32_MAX;
    long long int m3=INT64_MAX;
    cout<<m0<<" , "<<m1<<" , "<<m2<<" , "<<m3<<" , "<<endl;

    // input(n,arr);
    // max_(n,arr);
    // output(n,arr);

    return 0;
}
*/

/*
number of subarray of an array with n elements = nc2 + n =n*(n+1)/2

subsequence: sequence that can be derived an array by selecting zero or more elements, without canging the order of the remaining elements. = 2^n

every subarray is a subsequence but not vice versa.
*/

/*
#include <bits/stdc++.h>
using namespace std;

int input(int n, int arr[])
{
    for (auto i = 0; i < n; i++)
        cin >> arr[i];
};

int sum(int n, int arr[])
{
    for (auto i = 0; i < n; i++)
    {
        int j;
        int current = 0;
        for (j = i; j < n; j++)
        {
            current += arr[j];
            cout <<"sum="<<current<<endl;
        //     cout <<"sum="<<current<<"  ";
        // for (auto k = i; k <= j; k++)
        //     cout<<arr[k]<<" ";
        // cout<<endl;
        }
        // cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    input(n, arr);
    sum(n, arr);

    return 0;
}

*/

// longest arithmetic subarray - array that contains atleast two integers and the differences between consecutive integers are equal
/*
#include <bits/stdc++.h>
using namespace std;

int input(int n, int arr[])
{
    for (auto i = 0; i < n; i++)
        cin >> arr[i];
};

int maxArray(int n, int arr[])
{
    int j=2;
    int ans=2;
    int curr=2;
    int pd=arr[1]-arr[0];
    while (j<n)
    {
        if(pd==arr[j]-arr[j-1]) {
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
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
*/

#include <bits/stdc++.h>
using namespace std;

int input(int n, int arr[])
{
    for (auto i = 0; i < n; i++)
        cin >> arr[i];
};
int output(int n, int arr[])
{
    for (auto i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            cout << arr[i] << " ";
    }
};

int record(int n, int arr[])
{
    int i = 0, ans = 0, j = 0;
    int rec[n];
    for (i = 0; i < n; i++)
        rec[i] = 0;
    for (i = 0; i < n; i++)
    {
        ans = max(ans, arr[i]);
        if (arr[i] > arr[i + 1] && arr[i]==ans)
        {
            rec[j] = i + 1;
            j++;
        }
        else if (ans == arr[n])
        {
            rec[j] = i + 1;
            j++;
        }
    }
    output(n, rec);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    input(n, arr);
    record(n, arr);

    return 0;
}