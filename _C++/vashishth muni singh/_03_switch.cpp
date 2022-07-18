#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    int day;
    cout << "enter the day num";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "mon";
        break;
    case 2:
        cout << "tue";
        break;
    case 3:
        cout << "wed";
        break;
    case 4:
        cout << "thu";
        break;
    case 5:
        cout << "fri";
        break;
    case 6:
        cout << "sat";
        break;
    case 7:
        cout << "sun";
        break;
    default:
        cout << "invalid";
    }

    getch();
    return 0;
}