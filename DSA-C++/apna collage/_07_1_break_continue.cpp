#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");

    int money = 1200;
    for (int date = 1; date <= 31; date++)
    {
        if (date % 2 == 0)
        {
            continue;
        }
        money -= 200;
        cout << date << " : go outside.\n";
        if (money < 200)
            break;
    }
    getch();
    return 0;
}