#include <bits/stdc++.h>
using namespace std;

// check kth bit is set or not
bool check(int n, int k)
{
    // left shift
    // return (n & (1 << (k - 1))) > 0;

    // right shift
    return (1 & (n >> (k - 1))) != 0;
}

int main()
{
    int x, k;
    cin >> x >> k;
    if (check(x, k))
        cout << "yes" << endl;
    else
        cout << "NO" << endl;

    return 0;
}