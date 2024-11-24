#include <iostream>
#include <conio.h>
using namespace std; 


int main()
{
system("cls");
int marks[5]={1,2,3,4,5};
cout<<*marks<<endl;  //1
cout<<marks<<endl;   //0x61fefc
getch();
return 0;
}