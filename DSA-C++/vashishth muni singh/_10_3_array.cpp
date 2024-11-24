#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    int marks[5] = {5, 4, 3, 2, 1};
    cout << *marks << endl; // 5
    cout << marks << endl;  // 0x61fefc

    cout << *marks + 1 << endl;   // 6
    cout << *(marks + 1) << endl; // 4
    cout << marks + 1 << endl;    // 0x61ff00

    cout << *marks + 2 << endl;   // 7
    cout << *(marks + 2) << endl; // 3
    cout << marks + 2 << endl;    // 0x61ff04

    for (int i = 0; i < 5; i++)
    {
        cout << *(marks + i) << " "; // 5 4 3 2 1
    }
    cout << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << (marks + i) << " "; // 0x61feec 0x61fef0 0x61fef4 0x61fef8 0x61fefc
                                    // 0x61fee4 0x61fee8 0x61feec 0x61fef0 0x61fef4
    }
    cout << "\n";

    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " "; // 5 4 3 2 1
    }
    cout << "\n";

    for (int i = 0; i < 5; i++)
    {
        // cin >> marks[i]; // 6 7 8 9 10
        cin >> *(marks + i); // 6 7 8 9 10
    }
    cout << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << *(marks + i) << " "; // 6 7 8 9 10
    }
    cout << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << (marks + i) << " "; // 0x61feec 0x61fef0 0x61fef4 0x61fef8 0x61fefc
                                    //  0x61fee4 0x61fee8 0x61feec 0x61fef0 0x61fef4
    }
    cout << "\n";

    getch();
    return 0;
}