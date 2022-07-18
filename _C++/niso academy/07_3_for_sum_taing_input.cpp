#include <iostream>
#include <conio.h>
using namespace std; 


int main()
{
system("cls");
int sum =0, var;
cout<<"enter the number till which the sum has to be calculated:"<<endl;
cin>>var;
for (int i = 0; i <=var; i++)
{
    sum+=i;  //sum=sum+i;
}
cout<<"sum of 1 to "<<var   <<" is "<<sum<<endl;

getch();
return 0;
}