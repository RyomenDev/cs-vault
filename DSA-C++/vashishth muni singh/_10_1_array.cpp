#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    int marks[5], i;
    for (int i = 0; i < 5; i++)
        cin >> marks[i];
    for (int i = 0; i < 5; i++)
        cout << marks[i] << endl;
    getch();
    return 0;
}
// array
/*
not implemented
1.addition of two addresses
2.multiplication of two addresses
3.division of two addresses

possible
1.subtraction of two addresses
*/
/*
in context of s0ingle address
1.addition and subtraction of two addresses is possible
*/

/*
&marks=1000
marks+1=1004
int a=marks+1
int b=(a+1) or (marks+1+1)
*/