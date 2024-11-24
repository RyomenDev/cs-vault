
/*
XOR ^

output 1 if two inputs are different
else 0

left shift
0010 --> 0100   (x 2)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1 = 3, y1 = 6, z1 = 3;
    // AND 1 & 1 = 1 else 0
    cout << (x1 & y1) << endl; // output 2
    cout << (x1 & z1) << endl; // output 3
    // OR 0 | 0 = 0 else 1
    cout << (x1 | y1) << endl; // output 7
    cout << (x1 | z1) << endl; // output 3
    // XOR 1^0 = 0^1 =1 else 0
    cout << (x1 ^ y1) << endl; // output 5
    cout << (x1 ^ z1) << endl; // output 0

    return 0;
}