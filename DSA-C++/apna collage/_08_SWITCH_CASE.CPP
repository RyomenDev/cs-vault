#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    char button;
    cout << "input a charecter:\n";

    cin>>button;

    switch (button)
    {
    case 'a':
        cout << "Hello\n";
        break;

    case 'b':
        cout << "bye\n";
        break;

    default:
        cout << "not valid\n";
        break;
    } 
    return 0;
}