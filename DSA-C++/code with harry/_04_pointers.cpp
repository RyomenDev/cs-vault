// pointer: data type which holds the address of other data types
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    int a = 3;
    int *b = &a;
    int **c = &b;
    cout << "value of a is " << a << endl;
    cout << "address of a is " << &a << endl;
    cout << "value of a is " << *b << endl; // value at address at b
    cout << "address of a is " << b << endl;// valueat b
    cout << "value of a is " << **c << endl; //value at the value address of c
    cout << "address of a is " << *c << endl; // value at address at c
    cout << "address of b is " << c << endl;  // value in c

    getch();
    return 0;
}