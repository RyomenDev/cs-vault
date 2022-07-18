#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    int num;
    cout << "enter any number:" << endl;
    cin >> num;
    if (num > 10)
    {
        cout << "the number is greater than 10.\n";
    }
    else if (num < 10)
    {
        cout << "the number is less than 10.\n";
    }
    else
    {
        cout << "the number is equal to 10.\n";
    }
    getch();
    return 0;
}