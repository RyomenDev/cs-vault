#include <iostream>
#include <conio.h>
using namespace std;

void swap1(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
void swap2(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    system("cls");
    int a = 4, b = 6;
    cout << "a= " << a << " and b= " << b << endl;
    swap1(a, b);// not work
    cout << "a= " << a << " and b= " << b << endl;
    swap2(&a, &b);//work --->function call by address
    cout << "a= " << a << " and b= " << b << endl;
    getch();
    return 0;
}