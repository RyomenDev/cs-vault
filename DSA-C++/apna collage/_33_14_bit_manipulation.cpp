#include <iostream>
#include <conio.h>
using namespace std; 

int getbit(int n,int pos){
    return (n & (1<<pos))!=0;
}

int setbit(int n,int pos){
    return (n | (1<<pos));
}

int clearbit(int n,int pos){
    return (n & ~(1<<pos));
}

int updatebit(int n,int pos,int value){
    int mask= (n & ~(1<<pos));
     return (mask | (value<<pos));
}

int main()
{
system("cls");

cout<<getbit(8,3 )<<endl;//1000 & 1000
cout<<setbit(4,3 )<<endl;//100 & 1000
cout<<clearbit(12,2 )<<endl;//1100 & 100
cout<<updatebit(4,3,1 )<<endl;//0100 & 1000

getch();
return 0;
}