#include <iostream>
#include <conio.h>
using namespace std; 


int main()
{
system("cls");

int sum=0;
for(int i=1;i<=10;i++)

  //int i=0--->initialisation     i<=1---> condition    i++ ---->counter updation
{
    sum+=i; //sum=sum+i;
}
 cout<<"sum of 1 to 10 is ="<<sum<<"\n";
    cout<<"sum of 1 to 10 is ="<<sum<<endl;
getch();
return 0;
}