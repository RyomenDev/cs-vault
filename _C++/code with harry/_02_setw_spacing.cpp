#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
    system("cls");
    int a = 3, b = 7, c = 12;
    cout << "the value of a without setw is:" << a << endl;
    cout << "the value of b without setw is:" << b << endl;
    cout << "the value of c without setw is:" << c << endl;

    //setw for number of spaces between
    cout << "the value of a with setw is:" << setw(4) << a << endl;
    cout << "the value of b with setw is:" << setw(20) << b << endl;
    cout << "the value of c with setw is:" << setw(10) << c << endl;

    //operator precedence

    getch();
    return 0;
}