
/*
Left Shift (<<)
binary representation to be shifted left

    x= 00011 = 3
x<<1 = 00110 = 6
x<<2 = 01100 = 12
    ==>> x*2 (assuming first y bits are 0)

right Shift (>>)
    x= 00110 = 6
x>>1 = 00011 = 3
x>>2 = 00001 = 1
    ==>> x/2

*/

// -----------------------

/*

bitwise Not (~)
    unary operator
    inverts all bits of binary rep

  1 = 0001
~ 1 = 1110

x=5
    2^n -1 -5

2s compliment of x in n bits
   -x = 2^n - x
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 1;            //(-2^31 t0 2^31 -1)
    cout << (~x) << endl; // -2

    unsigned int y = 1;   //(0 to 2^32 -1)
    cout << (~y) << endl; // 42949672954 (max in 32 bit - 4294967295)

    return 0;
}