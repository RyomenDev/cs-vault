#include <iostream>
#include <conio.h>
using namespace std;

class employee
{
    int id;
    // static int count = 0;  //forbids in-class initialization of non-const static member 'employee::count'
    static int count; // every object share it , lifetime upto end

public:
    void setdata(void)
    {
        cout << "enter the id:\n";
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is :" << id << endl;
        cout << "the employee number is " << count << endl;
    }
    static void getcount(void) // static function share by every object
    {
        // cout << id;    //invalid use of member 'employee::id' in static member function
        // nonstatic member reference must be relative to a specific object
        cout << "the value of count is " << count << endl;
    }
};

int employee::count; //=100;  // default value =0  ,

int main()
{
    employee h1, h2, h3;
    // h1.id=1; //can't be accessed as it is private class

    h1.setdata();
    h1.getdata();
    // employee::getcount();
    h1.getcount();

    h2.setdata();
    h2.getdata();
    employee::getcount();

    h3.setdata();
    h3.getdata();
    employee::getcount();

    return 0;
}