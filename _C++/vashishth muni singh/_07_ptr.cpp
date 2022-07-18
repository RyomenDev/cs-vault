#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    int x = 5;
    int *p = &x, **q = &p, ***r = &q;
    cout << x << endl;    // value of x
    cout << *p << endl;   // value at address stored at p
    cout << **q << endl;  // value at address stored at the address stored at q
    cout << ***r << endl; // value at address stored at the address stored at address at r
    cout << endl;

    cout << &x << endl;  // address of x
    cout << p << endl;   // value(address) stored in p
    cout << *q << endl;  // value(address) stored in address(value) stored in q
    cout << **r << endl; // value(address) stored in address(value) stored in address(value) stored in r
    cout << endl;

    cout << &p << endl; // address of p
    cout << q << endl;  // value(address) stored in q
    cout << *r << endl; // value(address) stored in address(value) stored in r
    cout << endl;

    cout << &q << endl; // address of q
    cout << r << endl;  // value(address) stored in r
    cout << endl;

    cout << &r << endl; //address of r
    getch();
    return 0;
}