#include <iostream>
#include <conio.h>
using namespace std;

union money // used only one at one time ; memory allocation of the max memory size
{
    int rice;
    char car;
};

int main()
{
    // system("cls");
    /*
    union money m1;
    m1.rice = 43;
    // m1.wheat=23;
    // m1.car = 'a';

    cout << m1.rice << endl;
    // cout << m1.wheat << endl;
    // cout << m1.car << endl;
    */
    /*
     enum
     {
         tea,
         coffee,
         cheese
     }; // (0,1,2)
     cout << tea << endl;
     cout << coffee << endl;
     cout << cheese << endl;
     */
    enum meal
    {
        a,
        b,
        c
    };
    meal m1 = b;
    cout << m1 << endl;
    cout << (m1 == 2);

    getch();
    return 0;
}