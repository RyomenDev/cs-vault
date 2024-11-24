
#include <bits/stdc++.h>
using namespace std;

// power of two
bool check(int n)
{
    // if (n == 0)
    //     return false;
    // while (n != 1)
    // {
    //     if (n & 1 != 0) // n%2!=0
    //         return false;
    //     n = n >> 1; // n=n/1
    // }
    // return true;

    // EVEN NUMBER HAVE ONLY ONE SET BIT (1)
    return n && (!(n & (n - 1))); // brian_kerningam

    // if (n == 1)
    //     return true;

    // return !(n % 2) && check(n >> 1);
}

int main()
{
    int x;
    cin >> x;

    cout << check(x) << endl;

    return 0;
}