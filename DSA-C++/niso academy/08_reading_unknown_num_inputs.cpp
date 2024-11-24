#include <iostream>
#include <conio.h>
using namespace std; 


int main()
{
system("cls");

int sum=0, value=0;
cout<<"enter the values\n";
// read until end of file ,calculating a running total of all values read
while(cin>>value)// stop using (ctrl+z)
{
    sum+=value;
}
cout<<"sum="<<sum<<endl;
getch();
return 0;
}