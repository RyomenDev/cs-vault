#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    int marks[5] = {5, 4, 3, 2, 1};
    int *p = marks;
    cout << *p << endl; // 5
    // marks++; --->not possible
    cout << marks << endl;  // 0x61fef8
    cout << *marks << endl; // 5
    p++; //----> *p++
    cout << *p << endl; // 4

    // for (int i = 0; i < 5; i++)
    //  {
    //      cout << *(p + i) << " "; // 5 4 3 2 1
    //  }
    //  cout << "\n";
    //  for (int i = 0; i < 5; i++)
    //  {
    //      cout << (p + 1) << " "; // 0x61fef4 0x61fef4 0x61fef4 0x61fef4 0x61fef4
    //  }
    // cout << "\n";
    getch();
    return 0;
}