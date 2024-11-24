#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    int sizeofarray;
    cin >> sizeofarray;
    int *p = new int[sizeofarray];
    for (int i = 0; i < sizeofarray; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < sizeofarray; i++)
    {
        cout << "p[" << i << "]=" << p[i] << " ";
    }
    delete[] p;
    getch();
    return 0;
}