// function overloading : name can be same but argument differ (in type or quantity) , not depent on function return type
#include <iostream>
#include <conio.h>
using namespace std;

void area(int l, int b)
{
    cout << "area of rectangle is " << l * b << endl;
}
void area(int a)
{
    cout << "area of square is " << a * a << endl;
}
void area(double r)
{
    cout << "area of circle is " << 3.14 * r * r << endl;
}
// void acceptchar(char ch)
// {
//     cout << "first " << ch << endl;
// }
void acceptchar(int ch)
{
    cout << "first " << ch << endl;
}
// void acceptchar(float ch)
// {
//     cout << "first " << ch << endl;
// }
// void acceptchar(double ch)
// {
//     cout << "first " << ch << endl;
// }
int main()
{
    system("cls");
    area(4, 5);
    area(3);
    area(3.4);
    // char x='A';
    acceptchar('A'); // char--->int -->65(ascii)
    getch();
    return 0;
}
// function prototype : function return type , function name , argument
// function signature : function name , argument

// how compiler resolves function overloading
//  1. exact match
//  2. type promotion:
//          char,unsigned charsort--->int
//          float--->double
//  3.type conversion : any primitive ---> any primitive