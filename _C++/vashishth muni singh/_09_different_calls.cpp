#include <iostream>
#include <conio.h>
using namespace std;
void function_call_by_value(int a)
{
    a++;
}
void function_call_by_address(int *b)
{
    // cout << "b = " << b << endl; // b = 0x61ff0c
    // b++;
    // cout << "b = " << b << endl; // b = 0x61ff10
    (*b)++;
}
void function_call_by_reference(int &c)
{
    c++;
}

int main()
{
    system("cls");
    int p = 5;
    function_call_by_value(p);
    cout << "p = " << p << endl; // 5
    function_call_by_address(&p);
    cout << "p = " << p << endl; // 6
    function_call_by_reference(p);
    cout << "p = " << p << endl; // 7
    getch();
    return 0;
}