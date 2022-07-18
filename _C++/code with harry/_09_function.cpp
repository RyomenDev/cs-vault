#include <iostream>
#include <conio.h>
using namespace std;

// same as c  declaration,defination,call
inline int sum(int x, int y) //to reduce the function call overhead
//not recommended to use below lines with inline functions
{
    return x + y;
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    system("cls");
    int a = 8, b = 2;
    cout << "a=" << a << "  "
         << "b=" << b << endl;
    cout << "sum=" << sum(a, b) << endl;
    swap(a, b); // ----> by reference
    cout << "a=" << a << "  "
         << "b=" << b << endl;
    swap(&a, &b); // ----> by address
    cout << "a=" << a << "  "
         << "b=" << b << endl;
    getch();
    return 0;
}

/*
https://www.geeksforgeeks.org/inline-functions-cpp/
*/