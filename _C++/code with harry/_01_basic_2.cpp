#include <iostream>
#include <conio.h>
using namespace std; 


int main()
{
system("cls");
float x =56,z=78.78;
float &y =x;   //reference variable
cout << x << " " << y << endl;
cout << &x << " " << &y << endl;
y++;
cout << x << " " << y << endl;
cout << &x << " " << &y << endl;

cout<<"x="<<(float)x<<endl;
cout<<"x="<<(float)x<<endl;
cout<<"z="<<(int)z<<endl;
cout<<"z="<<int(z)<<endl;
cout<<"z="<<float(z)<<endl;
cout<<"z="<<(float)z<<endl;

const int xz=67;
cout<<"x="<<xz<<endl;
//xz=78;//expression must be a modifiable lvalue
getch();
return 0;
}