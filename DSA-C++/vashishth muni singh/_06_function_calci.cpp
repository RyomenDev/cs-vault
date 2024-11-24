#include <iostream>
#include <conio.h>
using namespace std;

int menu();

void sum();
int sub();
void mul(int, int);
float div(float, float);

int main()
{
    int a, b;
    float c, d;
    system("cls");
    while (1)
    {
        cout << "calculator\n";
        cout << "press any key to continue\n";
        getch();
        system("cls");
        // menu();
        switch (menu())
        {
        case 1:
            sum();
            break;
        case 2:
            // sub();
            cout << sub() << endl;
            break;
        case 3:
            cout << "enter the nums to multiply\n";
            cin >> a >> b;
            mul(a, b);
            break;
        case 4:
            cout << "enter the nums to divide\n";
            cin >> c >> d;
            cout << "the division of " << c << " by " << d << " is " << div(c, d) << endl;
            break;
        case 5:
            cout << "thanks for using this calcutor.\n";
            goto label;
            break;
        default:
            cout << "invalid choice\n";
            break;
        }
        cout << "\n";
    }
label:
    cout << "press any key to end\n";
    getch();
    return 0;
}

int menu()
{
    int choice;
    cout << "1.to sum\n2.to subtract\n3.multiply\n4.to divide\n5.exit\n";
    cin >> choice;
    return choice;
}

void sum()
{
    int a, b;
    cout << "enter the nums to add up.\n";
    cin >> a >> b;
    cout << "sum of " << a << " and " << b << " is " << a + b << endl;
}
int sub()
{
    int a, b;
    cout << "enter the nums to subtract.\n";
    cin >> a >> b;
    cout << "difference of " << a << " and " << b << " is ";
    return a - b;
}
void mul(int p, int q)
{
    cout << "product of " << p << " and " << q << " is " << p * q << endl;
}
float div(float p, float q)
{
    return p / q;
}