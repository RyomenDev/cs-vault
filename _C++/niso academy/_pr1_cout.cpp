#include <iostream>
#include <conio.h>   //getch()
using namespace std;

int main()
{
    system("cls");
    // cout<<5 \n ;               wrong
    cout << " 5 \n";
    cout << " */ \n";
    cout << " /* \n";
    // cout << /*" */ * / \n ";   wrong
    cout << /* " */ "/* " /*" */;
    getch();
    return 0;
}
