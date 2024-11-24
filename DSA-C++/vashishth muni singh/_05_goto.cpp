#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    int num, count = 0;
label:
    cout << "\nenter the num greater than 20" << endl;
    //scanf("%d", &num);
    cin>>num;
    if (num <= 20)
    {
        count++;
        cout << "try again\n";
        goto label;
    }
    else
    {
        count++;
        //printf("you did it in %d steps", count);
        cout<<"you did it in "<< count <<" steps\n";
    }
    getch();
    return 0;
}