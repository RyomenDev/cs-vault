#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    cout << "hello c++ !\n";
    float a, b, c;
    cout << "enter the marks of subject 1\n";
    cin >> a;
    cout << "enter the marks of subject 2\n";
    cin >> b;
    cout << "enter the marks of subject 3\n";
    cin >> c;
    cout<<"the average is "<<(a+b+c)/3;
    getch();
    return 0;
}