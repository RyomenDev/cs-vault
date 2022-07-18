#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");

    float a, b, c;
    cout << "enter the marks of subject 1\n";
    cin >> a;
    cout << "enter the marks of subject 2\n";
    cin >> b;
    cout << "enter the marks of subject 3\n";
    cin >> c;
    float average = (a + b + c) / 3;
    // cout<<"the average is "<<(a+b+c)/3;

    if (a <= 100 && b <= 100 && c <= 100)
    {
        // checks each and every if's
        if (average > 90)
            cout << "grade A with average \n"
                 << average;
        if (average > 80 && average <= 90)
            cout << "grade B with average \n"
                 << average;
        if (average > 70 && average <= 60)
            cout << "grade C with average \n"
                 << average;
        // else
        //     cout << "grade D\n";
    }
    else
        printf("invalid");

    getch();
    return 0;
}