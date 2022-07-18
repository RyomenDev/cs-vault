#include <iostream>
#include <conio.h>
using namespace std;

int *getmemory();
int *getmemory()
{
    // int x = 5;   //SMA- static memory allocation
    int *q = new int; // DMA- dynamic memory allocation
                      // q gets destroyed but its value remain stored i.e. address of 5
                      //  dangling pointer
    *q = 5;
    return (q);
}

int main()
{
    system("cls");
    int *p = getmemory();
    // cout<<p<<endl;
    cout << *p << endl; // segmentation fault == kind of error caused by accessing memory that doesn't belong to you' for x=6
    // int p=6; //not possibe conflicting declaration
   // cout << p << endl;  //0x10f6d80 garbage
    delete p;           // to clear memory of DMA
    cout << *p << endl; // garbage 17788752
   // cout << p << endl;   //0x10f6d80
    p = NULL;
    // cout << *p << endl;//waste
    // int p=6;//not possibe conflicting declaration

    getch();
    return 0;
}