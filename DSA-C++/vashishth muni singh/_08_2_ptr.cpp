#include <iostream>
#include <conio.h>
using namespace std;
void increment1(int *);
void increment2(int &);
void increment1(int *p)
{
    cout << "function1 p= " << p << endl;
    (*p)++; // x++
    cout << "fun1 p= " << *p << endl;
}
void increment2(int &y)
{
    cout << "function2 y= " << y << endl;
    y++;
    cout << "fun2 y= " << y << endl;
};

int main()
{
    //system("cls");
    int x = 5; // ordinary variable
    // int &y; wrong
    int &y = x; // reference variable-->y
    increment1(&x);// call by address
    cout << "x= " << x << endl;
    cout << "y= " << y << endl;
    cout << "&y= " << &y << endl;
    increment2(x); // call by reference
    cout << ":::::" << endl;
    cout << "x= " << x << endl;
    cout << "y= " << y << endl;

    getch();
    return 0;
}
