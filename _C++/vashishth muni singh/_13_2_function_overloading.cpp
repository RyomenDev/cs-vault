// function overloading : name can be same but argument differ (in type or quantity) , not depent on function return type
#include <iostream>
#include <conio.h>
using namespace std;

void area(int l, int b)
{
    // cout << "area of rectangle is " << l * b << endl;
    cout << "area of rectangle is " << endl;
}
void area(int a)
{
    // cout << "area of square is " << a * a << endl;
    cout << "area of square is " << endl;
}
void setchar(int ch)
{
    cout << "setting char ---> int " << endl;
}
void setchar(double ch)
{
    cout << "setting char ---> double " << endl;
}
void setfloat(double ch)
{
    cout << "setting flag ---> double " << endl;
}
void printchar(float ch)
{
    cout << "printing char ---> float " << endl;
}
void printchar(double ch)
{
    cout << "printing char ---> double " << endl;
}
int main()
{
    system("cls");
    area(4, 5);
    area(3);

    char a = 'A';
    setchar(a);

    float flag = 4.5f;
    setfloat(flag);

    char b = 'B';
    // printchar(b);  //---> int,float,double
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