#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "size of int " << sizeof(int) << endl;
    cout << "size of int " << sizeof(a) << endl;

    float b;
    cout << "size of float " << sizeof(float) << endl;

    char c;
    cout << "size of char " << sizeof(char) << endl;

    long int li;
    cout << "size of long int " << sizeof(li) << endl;

    short int si;
    cout << "size of short int " << sizeof(si) << endl;
}
/*
size of int4
size of int4
size of float4
size of char1
size of long int 4
size of short int 2
*/
/*
int --> 4 byte
range(unsigned) = 0 to 2^32-1 --> using 4 bits integer
range(signed)     = -2^31 to 2^31-1

float --> 4 byte --> upto 7 decimal digits
double --> 8 byte --> upto 15 decimal digits
char --> 1 byte
bool --> 1 byte -->1(true) & 0(false)

[ ASCII TABLE ]

type modifiers

signed = 4 bytes   --> -2,147,483,648 to 2,147,483,647
unsigned = 4 bytes --> 0 to 4,294,967,295
long = 8 bytes --> -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
short = 2 bytes --> -32,768 to 32,767
*/