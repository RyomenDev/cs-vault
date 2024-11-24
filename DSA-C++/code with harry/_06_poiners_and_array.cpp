#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    int marks[6] = {5, 6, 7, 8, 9};
    // int *a=&marks;  ---> wrong

    int *a = &marks[0]; // address of 0th element
    int *b = marks;     // address of first element
    cout << a << endl;  // address of first element of array  /////////

    for (int i = 0; i < 10; i++)
        cout << a[i] << " "; // values
    cout << endl;
    cout << *a << endl; // value
    a += 3;             // a[3] =8
    cout << *a << endl; // value

    /*for (int i = 0; i < 10; i++)  --------------------> wrong
        cout << *a << " "; // address
    cout << endl;*/

    cout << b << endl; // address of first element of array  ////////
    for (int i = 0; i < 10; i++)
        cout << b[i] << " "; // values
    cout << endl;

    /*for (int i = 0; i < 10; i++)  --------------------> wrong
        cout << *b[i] << " "; // address
    cout << endl;*/

    // POINTER ARITHMETIC
    /*address new=addresscurrent + i*sixeof(data type)*/
    /*       new(b) =          b    +  i*4               */

    cout << "the value of *b is " << *b << endl;
    cout << "the value of *(b+1) is " << *(b + 1) << endl;
    cout << "the value of *(b+2) is " << *(b + 2) << endl;
    cout << "the value of *(b+3) is " << *(b + 3) << endl;
    cout << "outbound: the value of *(b+3) is " << *(b + 6) << endl;

    cout<<endl;

    cout << "the value of *a (a{3])is " << *a << endl;
    cout << "the value of *(a-1) is " << *(a - 1) << endl;
    cout << "the value of *(a-2) is " << *(a - 2) << endl;
    cout << "the value of *(a-3) is " << *(a - 3) << endl;
    cout << "outbound: the value of *(a-6) is " << *(a - 6) << endl;
    getch();
    return 0;
}