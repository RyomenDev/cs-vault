// object memory allocation and array in class

#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;
    // static int counter;

public:
    void initcounter(void) { counter = 0; };
    void getprice(void);
    void displayprice(void);
};
 
// int shop:: counter=0;

void shop::getprice(void)
{
    cout << "enter id of your item" << endl;
    cin >> itemid[counter];
    cout << "enter the price of item" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
        cout << "id is " << itemid[i] << " and price is " << itemprice[i] << endl;
}

int main()
{
    shop s1;
    s1.initcounter();
    s1.getprice();
    s1.getprice();
    s1.displayprice();
    return 0;
}