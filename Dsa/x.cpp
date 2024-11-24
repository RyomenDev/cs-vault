#include <bits/stdc++.h>
using namespace std;

void solve(int x)
{
    int arr[x];
    for (int i = 0; i < x; i++)
        cin >> arr[i];

    int prev = 0, end = 0;
    int pnum = arr[0], lnum = arr[x - 1];
    for (int i = 0; i < x; i++)
    {
        if (arr[i] == pnum)
            prev++;
        else
            break;
    }
    if (prev == x)
    {
        cout << 0 << endl;
        return;
    }
    if (pnum == lnum)
    {
        for (int i = (x - 1); i >= 0; i--)
        {
            if (arr[i] == pnum)
                prev++;
            else
                break;
        }
        cout << x - prev << endl;
        return;
    }
    else
    {
        for (int i = (x - 1); i >= 0; i--)
        {
            if (arr[i] == lnum)
                end++;
            else
                break;
        }
        int res = max(prev, end);
        cout << x - res << endl;
        return;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        solve(x);
    }
    return 0;
}