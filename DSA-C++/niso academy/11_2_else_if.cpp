#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    int choice;
    cout << "enter:\n"
         << "1-for coffee.\n2-for tea\n";
    cin >> choice;
    if (choice == 1)
    {
        cout << "your coffee is on its way.\nthankyou\n"
             << endl;
    }
    else if (choice == 2)
    {
        cout << "your tea is on its way.\nthankyou\n"
             << endl;
    }
    else
    {
        cout << "you have entered a wrong option.";
    }
    getch();
    return 0;
}