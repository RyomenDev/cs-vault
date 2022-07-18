#include <iostream>
#include <conio.h>
using namespace std;

int sum()
{
    static int sum = 0; // 1 2 3 4 5 --> executes only once,value of sum will be reatained
    // int sum = 0; //1 1 1 1 1
    sum = sum + 1;
    return sum;
}
int money(int amount, float interest = 1.45)
{
    return amount * interest;
}
int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1); //5*factorial(4);....5*4*3*2*factorial(1);5*4*3*2*1;
}
int main()
{
    system("cls");
    for (int i = 0; i < 5; i++)
        cout << sum() << " ";
    cout << endl;
    int a = 2;
    cout << money(a) << endl;
    cout << money(a, 2) << endl;
    cout << money(5, 2) << endl<<endl;
    cout << factorial(5) << endl;
    getch();
    return 0;
}