#include <bits/stdc++.h>
using namespace std;

// count set bit
int count(int n)
{
    // base condition
    if (n <= 0)
        return 0;
    return n % 2 + count(n / 2);

    // right shift
    // return (1 & n) + count(n >> 1);

    // bitwise and of any number with 1
    // 1 if number is odd else 0
}

// brian kerningam 's Algorithm
// run loop in set bit count times only (1)

// when 1 subtracted from a num, all the bits which are 0 from the last 1(left most) will become 1 , ans last set bit become 0 from 1

int brian_kerningam(int n)
{
    // int count = 0;
    // while (n)
    // {
    //     n = n & (n - 1);
    //     count++;
    // }
    // return count;

    if (n <= 0)
        return 0;
    return brian_kerningam(n & (n - 1)) + 1;
}

// Look up table method for 32 bit number

/*
divide 32 bit into 8 bit chunks - 4 chunks
        0-255 (0 to 2^7 - 1)


*/
int table[256];

void precompute()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
        table[i] = table[i / 2] + (i & 1);
    // table[i] = table[i / 2] + (i % 2);
}

int lookup(int n)
{
    precompute();

    // int res = table[n & 0xff]; // last 8 bits
    // n = n >> 8;
    // res = res + table[n & 0xff];
    // n = n >> 8;
    // res = res + table[n & 0xff];
    // n = n >> 8;
    // res = res + table[n & 0xff];

    // return res;

    int res = table[n & 0xff] + table[(n >> 8) & 0xff] + table[(n >> 16) & 0xff] + table[(n >> 24) & 0xff];

    return res;

    // if (n == 0)
    //     return 0;
    // return table[n & 0xff] + lookup(n >> 8);
}

int main()
{
    int x;
    cin >> x;

    // cout << count(x) << endl;
    // cout << brian_kerningam(x) << endl;
    cout << lookup(x) << endl;

    return 0;
}