#include <iostream>
#include <conio.h>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setdata(int a, int b, int c); // declaration
    void getdata()
    {
        cout << a << "," << b << "," << c << "," << d << "," << e << endl;
    }
};
//}h1;h2;h3;h4; //class ojects
void employee ::setdata(int a1, int b1, int c1) // defination
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    system("cls");
    employee h1;
    h1.d = 56;
    h1.e = 87;
    //h1.a = 67; //:a is private within this context
    h1.setdata(1, 2, 3);
    h1.getdata();

    getch();
    return 0;
}

/*
proccedure oriented programming
1)consists of writing a set of instructions for the computer to follow
2)main focus is on functions and not on flow of float
3)functions can either use local or global variables
4)data moves openly from functions to functions
*/
/*
object oriented programming
1)works on the concept of classes and functions
2)a class is a template to create objects
3)treats data as a critical element
4)decomposes the problem in objects and builds data and functions around the objects
*/
/*
1)class : basic template for creating objects
2)objects : basic run time entities
3)data abstraction & encapsulation : wrapping data and functions into single unit
4)inheritance : properties ofone class can be inherited into others
5)polymorphism : ability to take more than one forms
6)dynamic binding : code which will execute is not known until the program runs
7)message passing : object message(information) call format.
*/
/*
benifits of opp
1)better code reusability using objects and inheritance
2)principle of data hiding helps build secure systems
3)multiple objects can co-exist without any interference
4)software complexity can be easily managed
*/