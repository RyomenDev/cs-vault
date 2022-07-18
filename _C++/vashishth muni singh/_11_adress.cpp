#include <iostream>
#include <conio.h>
using namespace std; 


int main()
{
system("cls");
int a=5,*p=&a;
cout<<*p<<endl; //5
cout<<p<<endl;  //0x61ff08
//p++;  //0x61ff0c
//p+1; //does not work
p--;
cout<<*p<<endl; //4201088 --->random value
cout<<p<<endl;   //0x61ff04
getch();
return 0;
}