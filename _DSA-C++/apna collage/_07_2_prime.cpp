#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");

    cout << "enter the nums:\n";
    int i, a, b;
    cin >> a >> b;

    for (int j = a; j <= b; j++)
    {
        for (i = 2; i <= j; i++)
        {
            if (j % i == 0)
            {
                break;
            }
        }
        if (i == j)
            cout << j << " ";
    }
    cout << "\n";

    getch();
    return 0;
}