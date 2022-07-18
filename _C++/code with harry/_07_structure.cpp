#include <iostream>
#include <conio.h>
using namespace std;

struct employee
{
    int id;
    // char name1;   // character constant too long for its type
    // string name2; // character constant too long for its type
    char favchar;
    float salary;
} e2;

typedef struct student
{
    int id;
    char name1; // character constant too long for its type
} st;

int main()
{

    system("cls");
    struct employee e1;
    e1.id = 1;
    // e1.name = "berlin"; --> wrong
    // e1.name1 = 'berlin';
    // e1.name2 = 'berlin';
    e1.favchar = 'b';
    e1.salary = 23.3234;

    e2.id = 2;
    cout << e2.id << endl;
    // e2.favchar = 'a';
    // e2.salary = 23.3234;

    cout << e1.id << endl;
    // cout << e1.name1 << endl;
    // cout << e1.name2 << endl;
    cout << e1.favchar << endl;
    cout << e1.salary << endl;

    cout << "****************" << endl;

    // student s1; // also wroks --> 'typedef' was ignored in this declaration
    st s1;
    s1.id = 1;
    s1.name1 = 'c';
    cout << s1.id << endl;
    cout << s1.name1 << endl;

    getch();
    return 0;
}